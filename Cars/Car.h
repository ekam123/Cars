//
//  Car.h
//  Cars
//
//  Created by Ekam Singh Dhaliwal on 2019-05-19.
//  Copyright © 2019 ekam-singh. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface Car : NSObject

@property NSString *model;

- (void)drive; 
- (instancetype)initWithModel: (NSString *) modell; 

@end

NS_ASSUME_NONNULL_END
