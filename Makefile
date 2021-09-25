FPC=/usr/local/lib/fpc/3.3.1/ppcx64
OUTPUT=units
OPTS=-vbr -dMACOSALL -FU${OUTPUT}
# For single units use CocoaAll.pas for additional types that may be required in Foundation etc...
SINGLE_UNIT=-dCOCOAALL

all:
	mkdir -p ${OUTPUT}
	
	${FPC} CocoaAll.pas -dCOCOAALL ${OPTS}

	${FPC} QuartzCore.pas ${OPTS}
	${FPC} CoreImage.pas ${OPTS}
	${FPC} CoreData.pas ${OPTS}
	${FPC} AppKit.pas ${OPTS}
	${FPC} Foundation.pas ${OPTS}

	${FPC} QuickLookThumbnailing.pas ${OPTS} ${SINGLE_UNIT}
	${FPC} AddressBook.pas ${OPTS} ${SINGLE_UNIT}
	${FPC} UserNotifications.pas ${OPTS} ${SINGLE_UNIT}
	${FPC} UserNotificationsUI.pas ${OPTS} ${SINGLE_UNIT}
	${FPC} Contacts.pas ${OPTS} ${SINGLE_UNIT}
	${FPC} ContactsUI.pas ${OPTS} ${SINGLE_UNIT}
	${FPC} CoreAudioKit.pas ${OPTS} ${SINGLE_UNIT}
	${FPC} SensorKit.pas ${OPTS} ${SINGLE_UNIT}
	${FPC} QuickLook.pas ${OPTS} ${SINGLE_UNIT}
	${FPC} QuickLookUI.pas ${OPTS} ${SINGLE_UNIT}
	${FPC} CoreML.pas ${OPTS} ${SINGLE_UNIT}
	${FPC} CoreBluetooth.pas ${OPTS} ${SINGLE_UNIT}
	${FPC} CoreHaptics.pas ${OPTS} ${SINGLE_UNIT}
	${FPC} CoreWLAN.pas ${OPTS} ${SINGLE_UNIT}
	${FPC} PrintCore.pas ${OPTS} ${SINGLE_UNIT}
	${FPC} PushKit.pas ${OPTS} ${SINGLE_UNIT}
	${FPC} MetricKit.pas ${OPTS} ${SINGLE_UNIT}
	${FPC} ReplayKit.pas ${OPTS} ${SINGLE_UNIT}
	${FPC} EventKit.pas ${OPTS} ${SINGLE_UNIT}
	${FPC} AppleScriptObjC.pas ${OPTS} ${SINGLE_UNIT}
	${FPC} Automator.pas ${OPTS} ${SINGLE_UNIT}
	${FPC} CloudKit.pas ${OPTS} ${SINGLE_UNIT}
	${FPC} StoreKit.pas ${OPTS} ${SINGLE_UNIT}
	${FPC} CoreLocation.pas ${OPTS} ${SINGLE_UNIT}
	${FPC} ImageCaptureCore.pas ${OPTS} ${SINGLE_UNIT}
	${FPC} ImageKit.pas ${OPTS} ${SINGLE_UNIT}
	${FPC} PDFKit.pas ${OPTS} ${SINGLE_UNIT}
	${FPC} MapKit.pas ${OPTS} ${SINGLE_UNIT}
	${FPC} SceneKit.pas ${OPTS} ${SINGLE_UNIT}
	${FPC} SpriteKit.pas ${OPTS} ${SINGLE_UNIT}
	${FPC} GameKit.pas ${OPTS} ${SINGLE_UNIT}
	${FPC} GameplayKit.pas ${OPTS} ${SINGLE_UNIT}
	${FPC} WebKit.pas ${OPTS} ${SINGLE_UNIT}
	${FPC} AVFAudio.pas ${OPTS} ${SINGLE_UNIT}
	${FPC} Photos.pas ${OPTS} ${SINGLE_UNIT}
	${FPC} PhotosUI.pas ${OPTS} ${SINGLE_UNIT}
	${FPC} ModelIO.pas ${OPTS} ${SINGLE_UNIT}
	${FPC} Metal.pas ${OPTS} ${SINGLE_UNIT}
	${FPC} MetalKit.pas ${OPTS} ${SINGLE_UNIT}
	${FPC} CalendarStore.pas ${OPTS} ${SINGLE_UNIT}
	${FPC} AVFoundation.pas ${OPTS} ${SINGLE_UNIT}
	${FPC} CoreAudio.pas ${OPTS} ${SINGLE_UNIT}
	${FPC} CoreMedia.pas ${OPTS} ${SINGLE_UNIT}
	${FPC} CoreVideo.pas ${OPTS} ${SINGLE_UNIT}