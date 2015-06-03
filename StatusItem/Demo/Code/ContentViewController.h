//
//  ContentViewController.h
//  StatusItemPopup
//
//  Created by Lohit Talasila
//


#import <Cocoa/Cocoa.h>
#import "AXStatusItemPopup.h"

@interface ContentViewController : NSViewController

@property(weak, nonatomic) AXStatusItemPopup *statusItemPopup;

- (IBAction)closeButtonPressed:(id)sender;

@end
