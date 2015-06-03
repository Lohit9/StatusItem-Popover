//
//  ContentViewController.m
//  StatusItemPopup
//
//  Created by Lohit Talasila
//


#import "ContentViewController.h"

@interface ContentViewController ()

@end

@implementation ContentViewController

- (id)initWithNibName:(NSString *)nibNameOrNil bundle:(NSBundle *)nibBundleOrNil
{
    self = [super initWithNibName:nibNameOrNil bundle:nibBundleOrNil];
    if (self) {
        // Initialization code here.
    }
    
    return self;
}

- (IBAction)closeButtonPressed:(id)sender
{
    [_statusItemPopup hidePopover];
}

@end
