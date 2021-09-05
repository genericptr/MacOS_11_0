FPC=/usr/local/lib/fpc/3.3.1/ppcx64
OUTPUT=units
OPTS=-vbr -dMACOSALL -FU${OUTPUT}

all:
	mkdir -p ${OUTPUT}
	
	${FPC} CocoaAll.pas -dCOCOAALL ${OPTS}

	${FPC} AddressBook.pas ${OPTS}
	${FPC} UserNotifications.pas ${OPTS}
	${FPC} UserNotificationsUI.pas ${OPTS}
	${FPC} Contacts.pas ${OPTS}
	${FPC} ContactsUI.pas ${OPTS}
	${FPC} CoreAudioKit.pas ${OPTS}
	${FPC} SensorKit.pas ${OPTS}
	${FPC} QuickLook.pas ${OPTS}
	${FPC} QuickLookUI.pas ${OPTS}
	${FPC} CoreML.pas ${OPTS}
	${FPC} CoreBluetooth.pas ${OPTS}
	${FPC} CoreHaptics.pas ${OPTS}
	${FPC} CoreWLAN.pas ${OPTS}
	${FPC} PrintCore.pas ${OPTS}
	${FPC} PushKit.pas ${OPTS}
	${FPC} MetricKit.pas ${OPTS}
	${FPC} ReplayKit.pas ${OPTS}
	${FPC} EventKit.pas ${OPTS}
	${FPC} AppleScriptObjC.pas ${OPTS}
	${FPC} Automator.pas ${OPTS}
	${FPC} CloudKit.pas ${OPTS}
	${FPC} StoreKit.pas ${OPTS}
	${FPC} CoreLocation.pas ${OPTS}
	${FPC} ImageCaptureCore.pas ${OPTS}
	${FPC} ImageKit.pas ${OPTS}
	${FPC} PDFKit.pas ${OPTS}
	${FPC} MapKit.pas ${OPTS}
	${FPC} SceneKit.pas ${OPTS}
	${FPC} SpriteKit.pas ${OPTS}
	${FPC} GameKit.pas ${OPTS}
	${FPC} GameplayKit.pas ${OPTS}
	${FPC} WebKit.pas ${OPTS}
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