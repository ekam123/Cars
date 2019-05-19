//
//  Car.m
//  Cars
//
//  Created by Ekam Singh Dhaliwal on 2019-05-19.
//  Copyright © 2019 ekam-singh. All rights reserved.
//

#import "Car.h"

@implementation Car

- (void)drive {
    NSLog(@"%@", [self model]);
}

- (instancetype)initWithModel: (NSString *) modell {
    self = [super init];
    if (self) {
        _model = modell;
    }
    return self;
}

@end
