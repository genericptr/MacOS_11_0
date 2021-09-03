FPC=/usr/local/lib/fpc/3.3.1/ppcx64
OPTS=-vbr -dMACOSALL -FUoutput

all:
	mkdir -p output
	${FPC} AVFAudio.pas ${OPTS}
	${FPC} Photos.pas ${OPTS}
	${FPC} PhotosUI.pas ${OPTS}
	${FPC} ModelIO.pas ${OPTS}
	${FPC} Metal.pas ${OPTS}
	${FPC} MetalKit.pas ${OPTS}
	${FPC} CalendarStore.pas ${OPTS}
	${FPC} AVFoundation.pas ${OPTS}
	${FPC} QuartzCore.pas ${OPTS}
	${FPC} CoreAudio.pas ${OPTS}
	${FPC} CoreData.pas ${OPTS}
	${FPC} CoreMedia.pas ${OPTS}
	${FPC} CoreVideo.pas ${OPTS}
	${FPC} CocoaAll.pas -dCOCOAALL ${OPTS}