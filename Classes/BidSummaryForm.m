//
//  BidSummaryForm.m
//  PRIMECMAPP
//
//  Created by 3SG Corporation on 8/24/14.
//
//

#import "BidSummaryForm.h"

@interface BidSummaryForm ()


@end



@implementation BidSummaryForm
@synthesize scrollView;


- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view from its nib.
    
    // Do any additional setup after loading the view from its nib.
    scrollView.frame = CGRectMake(0,0, 720, 5100);
    [scrollView setContentSize:CGSizeMake(700, 8750)];
    self.view.backgroundColor = [UIColor colorWithPatternImage:[UIImage imageNamed:@"back.jpg"]];
    
    
    
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

-(void)viewDidUnload
{
    self.scrollView=nil;

}
@end
