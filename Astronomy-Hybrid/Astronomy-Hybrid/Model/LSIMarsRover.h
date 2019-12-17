//
//  LSIMarsRover.h
//  Astronomy-Hybrid
//
//  Created by Isaac Lyons on 12/16/19.
//  Copyright © 2019 Isaac Lyons. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_SWIFT_NAME(MarsRover)
@interface LSIMarsRover : NSObject

@property (nonatomic, readonly, copy, nonnull) NSString *name;

- (nonnull instancetype)initWithName:(nonnull NSString *)name;

- (nullable instancetype)initWithDictionary:(nonnull NSDictionary *)dictionary;

@end
