# _____     ___ ____     ___ ____
#  ____|   |    ____|   |        | |____|
# |     ___|   |____ ___|    ____| |    \    PS2DEV Open Source Project.
#-----------------------------------------------------------------------
# Copyright 2001-2004, ps2dev - http://www.ps2dev.org
# Licenced under Academic Free License version 2.0
# Review ps2sdk README & LICENSE files for further details.

EE_BIN = bin/ps2craft.elf
EE_OBJS = ps2craft.o
EE_LIBS = -ldraw -lgraph -lmath3d -lmf -lpacket -ldma

all: brick.c dirt.c gold_block.c cobblestone.c $(EE_BIN)
	$(EE_STRIP) --strip-all $(EE_BIN)

brick.c:
	bin2c tex/brick.raw tex/brick.c tex_brick

dirt.c:
	bin2c tex/dirt.raw tex/dirt.c tex_dirt

gold_block.c:
	bin2c tex/gold_block.raw tex/gold_block.c tex_gold_block

cobblestone.c:
	bin2c tex/cobblestone.raw tex/cobblestone.c tex_cobblestone

clean:
	rm -f $(EE_BIN) $(EE_OBJS) tex/brick.c tex/cobblestone.c tex/dirt.c tex/gold_block.c

run: $(EE_BIN)
	PCSX2 --elf=./bin/ps2craft.elf --nogui

reset:
	ps2client reset

include $(PS2SDK)/samples/Makefile.pref
include $(PS2SDK)/samples/Makefile.eeglobal
