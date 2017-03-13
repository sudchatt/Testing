//
//  NativeService.m
//  Appzillon
//
//  Created by Admin on 07/10/13.
//
//

#import "NativeService.h"
#import "AppzillonAppDelegate.h"
#import "AppzillonViewController.h"


@interface NativeService()
    @property(nonatomic,weak)AppzillonViewController *viewController;
@end



@implementation NativeService

-(void)execute:(NSDictionary *)jsonDict wbView:(UIWebView *)webView{
    AppzillonAppDelegate *appDelegate = [[UIApplication sharedApplication] delegate];
    self.viewController = [appDelegate viewController];
   
    //Custom Native plugin Execution logic here, Pass ViewController & webview from here
}

@end
