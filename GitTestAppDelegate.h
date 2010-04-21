//
//  GitTestAppDelegate.h
//  GitTest
//
//  Created by Geoff Garside on 20/04/2010.
//  Copyright 2010 M247 Ltd. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@class GITRepo;
@interface GitTestAppDelegate : NSObject <NSApplicationDelegate> {
    NSWindow *window;
    GITRepo *repo;
}

@property (assign) IBOutlet NSWindow *window;
@property (retain) GITRepo *repo;

@end
