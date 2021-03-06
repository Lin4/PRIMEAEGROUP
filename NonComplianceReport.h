//
//  NonComplianceReport.h
//  ComSMART
//
//  Created by Lingeswaran Kandasamy on 5/2/14.
//
//

#import <UIKit/UIKit.h>
#import <MessageUI/MessageUI.h>
#import <QuartzCore/QuartzCore.h>
#import "MBProgressHUD.h"

@interface NonComplianceReport : UIViewController<MFMailComposeViewControllerDelegate,MBProgressHUDDelegate,UIPrintInteractionControllerDelegate>
{
     UIPrintInteractionController *printController;
}

@property(nonatomic,retain)NSString *CNo;

@property (weak, nonatomic) IBOutlet UITextView *lblContractorRes;
@property (weak, nonatomic) IBOutlet UITextField *nonComNotNo;
@property (weak, nonatomic) IBOutlet UITextField *dateCRC;
@property (weak, nonatomic) IBOutlet UITextView *lblProjDec;
@property(nonatomic,weak)IBOutlet UITableView *tblView;
@property(nonatomic,weak)IBOutlet UIView *headerView;


@property (weak, nonatomic) IBOutlet UITextField *txtContactNo;
@property (weak, nonatomic) IBOutlet UITextField *txtTitle;
@property (weak, nonatomic) IBOutlet UITextField *txtProject;
@property (weak, nonatomic) IBOutlet UITextField *txtDateIssued;
@property (strong, nonatomic) IBOutlet UITextView *lblCorrectiveActionComp;
@property (weak, nonatomic) IBOutlet UITextField *txtTo;
@property (weak, nonatomic) IBOutlet UITextField *txtDateContractorStarted;
@property (weak, nonatomic) IBOutlet UITextField *txtDateOfRawReport;
@property (weak, nonatomic) IBOutlet UITextField *txtDateContractCompleted;
@property (weak, nonatomic) IBOutlet UITextField *txtPrintedName;
@property (weak, nonatomic) IBOutlet UITextField *txtDate;
@property (weak, nonatomic) IBOutlet UIImageView *imgSignature;


-(void)populateNonComplianceForm;
@end
