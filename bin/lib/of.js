_ = require('lib/underscore')

var ofFull = {}

_.extend(ofFull, ofAppRunner)
_.extend(ofFull, ofGraphics)
_.extend(ofFull, ofMath)
_.extend(ofFull, OpenGL)
_.extend(ofFull, ofImage)
_.extend(ofFull, ofUtils)
_.extend(ofFull, ofSoundStream)
_.extend(ofFull, ofSoundPlayerG)

ofFull.kExternalByteArray = 1
ofFull.kExternalUnsignedByteArray = 2
ofFull.kExternalShortArray = 3
ofFull.kExternalUnsignedShortArray = 4
ofFull.kExternalIntArray = 5
ofFull.kExternalUnsignedIntArray = 6
ofFull.kExternalFloatArray = 7

//Include underscore
ofFull._ = _

module.exports = ofFull