//
//  Uri.h
//  Keychain
//
//  Created by Robert Ellis on 2021/12/28.
//

#ifndef Uri_h
#define Uri_h

#import <Foundation/Foundation.h>

@interface Uri : NSObject

- (instancetype) init:(long) uriPtr :(NSError **) error;

- (void) dealloc;

- (long) getPtrValue;

+ (instancetype) withUriString:(NSString *) uriString :(NSError **) error;

- (NSNumber *) isNil :(NSError **) error;

- (NSString *) toString :(NSError **) error;

@end

#endif /* Uri_h */
