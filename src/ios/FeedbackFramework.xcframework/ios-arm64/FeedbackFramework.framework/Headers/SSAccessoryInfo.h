//
//  SSAccessoryInfo.h
//  SystemServicesDemo
//
//  Created by Pedro Santos on 18/9/18.
//

#import <Foundation/Foundation.h>

@interface SSAccessoryInfo : NSObject

// Accessory Information

// Are any accessories attached?
+ (BOOL)accessoriesAttached;

// Are headphone attached?
+ (BOOL)headphonesAttached;

// Number of attached accessories
+ (NSInteger)numberAttachedAccessories;

// Name of attached accessory/accessories (seperated by , comma's)
+ (nullable NSString *)nameAttachedAccessories;

@end
