//
//  mrAppDelegate.h
//  mr
//
//  Created by Julien Palmas on 05/01/11.
//  Copyright 2011 Crux Consulting. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface mrAppDelegate : NSObject <NSApplicationDelegate> {
    NSWindow *window;
}

@property (assign) IBOutlet NSWindow *window;

@end
