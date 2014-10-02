//
//  ComplianceReport.h
//  ComSMART
//
//  Created by Lingeswaran Kandasamy on 5/2/14.
//
//

#import <UIKit/UIKit.h>
#import <MessageUI/MessageUI.h>
#import <QuartzCore/QuartzCore.h>
#import "MBProgressHUD.h"

@interface ComplianceReport : UIViewController<MFMailComposeViewControllerDelegate,MBProgressHUDDelegate,UIPrintInteractionControllerDelegate>
{
    UIPrintInteractionController *printController;
}
@property(nonatomic,retain)NSString *CNo;
@property(nonatomic,retain)NSString *sigImgName;
@property(nonatomic,retain)IBOutlet UIImageView *imgSignature;
@property (strong, nonatomic) IBOutlet UITextField *comNoticeNo;


@property (strong, nonatomic) IBOutlet UIScrollView *scrollView;
@property (weak, nonatomic) IBOutlet UITextView *lblProjDec;
@property(nonatomic,weak)IBOutlet UIView *headerView;
@property(nonatomic,weak)IBOutlet UITableView *tblView;
@property (weak, nonatomic) IBOutlet UITextField *txtContractNo;
@property (weak, nonatomic) IBOutlet UITextView *lblConRes;
@property (weak, nonatomic) IBOutlet UITextField *txtTitle;
@property (weak, nonatomic) IBOutlet UITextField *txtProject;
@property (weak, nonatomic) IBOutlet UITextField *txtDateIssued;
@property (strong, nonatomic) IBOutlet UITextView *lblCorrective;
@property (weak, nonatomic) IBOutlet UITextField *txtTo;
@property (weak, nonatomic) IBOutlet UITextField *txtDateContracStarted;
@property (weak, nonatomic) IBOutlet UITextField *txtDateContactCompleted;
@property (weak, nonatomic) IBOutlet UITextField *txtDateRawReport;
@property (weak, nonatomic) IBOutlet UITextField *txtPrintedName;
@property (weak, nonatomic) IBOutlet UITextField *txtNoticeNo;
@property (weak, nonatomic) IBOutlet UITextField *txtdate;



@end
