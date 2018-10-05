#include "global_header.h"


void load_texture(texbuffer_t *texbuf, char* texture, int width, int height)
{

	packet_t *packet = packet_init(50,PACKET_NORMAL);

	qword_t *q = packet->data;

	q = packet->data;

	q = draw_texture_transfer(q,texture,width,height,GS_PSM_24,texbuf->address,texbuf->width);
	q = draw_texture_flush(q);

	dma_channel_send_chain(DMA_CHANNEL_GIF,packet->data, q - packet->data, 0,0);
	dma_wait_fast();

	packet_free(packet);

}

void setup_texture(texbuffer_t *texbuf, int width, int height)
{

	packet_t *packet = packet_init(10,PACKET_NORMAL);

	qword_t *q = packet->data;

	// Using a texture involves setting up a lot of information.
	clutbuffer_t clut;

	lod_t lod;

	lod.calculation = LOD_USE_K;
	lod.max_level = 0;
	lod.mag_filter = LOD_MAG_NEAREST;
	lod.min_filter = LOD_MIN_NEAREST;
	lod.l = 0;
	lod.k = 0;

	texbuf->info.width = draw_log2(width);
	texbuf->info.height = draw_log2(height);
	texbuf->info.components = TEXTURE_COMPONENTS_RGB;
	texbuf->info.function = TEXTURE_FUNCTION_DECAL;

	clut.storage_mode = CLUT_STORAGE_MODE1;
	clut.start = 0;
	clut.psm = 0;
	clut.load_method = CLUT_NO_LOAD;
	clut.address = 0;
	q = draw_texture_sampling(q,0,&lod);
	q = draw_texturebuffer(q,0,texbuf,&clut);

	// Now send the packet, no need to wait since it's the first.
	dma_channel_send_normal(DMA_CHANNEL_GIF,packet->data,q - packet->data, 0, 0);
	dma_wait_fast();

	packet_free(packet);

}


void texture_swap(texbuffer_t *texbuf, char *texture, int width, int height) {
    setup_texture(texbuf, width, height);
    load_texture(texbuf, texture, width, height);
}