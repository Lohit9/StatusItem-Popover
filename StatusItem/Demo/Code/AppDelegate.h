//
//  AppDelegate.h
//  StatusItemPopup
//
//  Created by Lohit Talasila
//

#import <Cocoa/Cocoa.h>

@interface AppDelegate : NSObject <NSApplicationDelegate>

@property (assign) IBOutlet NSWindow *window;

- (IBAction)showPopover:(id)sender;
- (IBAction)showPopoverAnimated:(id)sender;
- (IBAction)hidePopover:(id)sender;

@end
