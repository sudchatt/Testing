//
//  NativeService.h
//  Appzillon
//
//  Created by Admin on 07/10/13.
//
//

#import <Foundation/Foundation.h>

@interface NativeService : NSObject
    -(void)execute:(NSDictionary *)jsonDict wbView:(UIWebView *)webView;
@end
