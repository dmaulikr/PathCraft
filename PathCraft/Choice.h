//
//  Choice.h
//  PathCraft
//
//  Created by David Seitz Jr on 7/11/15.
//  Copyright (c) 2015 DavidSights. All rights reserved.
//

#import "Environment.h"

@interface Choice : Environment

@property NSString *choiceDescription;
@property NSMutableArray *results;

- (void) createResultWithString:(NSString *)resultDescription;

@end