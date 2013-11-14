//
//  NSString+StringProcessing.h
//
//  Created by worakarn isaratham on 9/12/13.
//  Copyright (c) 2013 FaceCard. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSString (StringProcessing)

- (BOOL) containsString: (NSString*) substring;
- (BOOL) containsString: (NSString*) substring options:(NSStringCompareOptions) mask;
- (NSArray *) splitByWhitespace;

@end
