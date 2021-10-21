//
//  AIiOSVersion.h

#import <Foundation/Foundation.h>

typedef NS_ENUM(NSInteger, AIDeviceVersion){
    UnknownDevice         = 0,
    Simulator             = 1,
	
    iPhone4               = 3,
    iPhone4S              = 4,
    iPhone5               = 5,
    iPhone5C              = 6,
    iPhone5S              = 7,
    iPhone6               = 8,
    iPhone6Plus           = 9,
    iPhone6S              = 10,
    iPhone6SPlus          = 11,
    iPhone7               = 12,
    iPhone7Plus           = 13,
    iPhone8               = 14,
    iPhone8Plus           = 15,
    iPhoneX               = 16,
    iPhoneSE              = 17,
    
    iPad1                 = 18,
    iPad2                 = 19,
    iPadMini              = 20,
    iPad3                 = 21,
    iPad4                 = 22,
    iPadAir               = 23,
    iPadMini2             = 24,
    iPadAir2              = 25,
    iPadMini3             = 26,
    iPadMini4             = 27,
    iPadPro12Dot9Inch     = 28,
    iPadPro9Dot7Inch      = 29,
    iPad5                 = 30,
    iPadPro12Dot9Inch2Gen = 31,
    iPadPro10Dot5Inch     = 32,
    
    iPodTouch1Gen         = 33,
    iPodTouch2Gen         = 34,
    iPodTouch3Gen         = 35,
    iPodTouch4Gen         = 36,
    iPodTouch5Gen         = 37,
    iPodTouch6Gen         = 38,
    
    iPhoneXS              = 39,
    iPhoneXSMax           = 40,
    iPhoneXR              = 41,
    iPhone11              = 42,
    iPhone11Pro           = 43,
    iPhone11ProMax        = 44,
    
    iPad6                 = 45,
    iPad7                 = 46,
    iPadPro11Inch3Gen     = 47,
    iPadPro12Dot9Inch3Gen = 48,
    iPadMini5             = 49,
    iPadAir3              = 50,
    
    iPodTouch7Gen         = 51,
    
    iPhoneSE2             = 52,
    iPhone12mini          = 53,
    iPhone12              = 54,
    iPhone12Pro           = 55,
    iPhone12ProMax        = 56,
    iPhone13mini          = 57,
    iPhone13              = 58,
    iPhone13Pro           = 59,
    iPhone13ProMax        = 60

};

typedef NS_ENUM(NSInteger, AIDeviceSize){
    UnknownSize     = 0,
    Screen3Dot5inch = 1,
    Screen4inch     = 2,
    Screen4Dot7inch = 3,
    Screen5Dot5inch = 4,
    Screen5Dot8inch = 5,
    Screen6Dot1or5inch = 6
};

@interface AIiOSVersion : NSObject

+ (AIDeviceVersion)deviceVersion;
+ (NSString *)deviceNameForVersion:(AIDeviceVersion)deviceVersion;
+ (AIDeviceSize)resolutionSize;
+ (AIDeviceSize)deviceSize;
+ (NSString *)deviceSizeName:(AIDeviceSize)deviceSize;
+ (NSString *)deviceNameString;
+ (NSString *)deviceNameStringByTrimWhitespace;
+ (BOOL)isZoomed;

+ (BOOL)versionEqualTo:(NSString *)version;
+ (BOOL)versionGreaterThan:(NSString *)version;
+ (BOOL)versionGreaterThanOrEqualTo:(NSString *)version;
+ (BOOL)versionLessThan:(NSString *)version;
+ (BOOL)versionLessThanOrEqualTo:(NSString *)version;

@end
