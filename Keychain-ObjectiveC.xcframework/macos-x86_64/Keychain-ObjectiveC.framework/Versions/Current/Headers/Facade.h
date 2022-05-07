//
//  Facade.h
//  Keychain
//
//  Created by Robert Ellis on 2021/12/28.
//

#ifndef Facade_h
#define Facade_h

#import <Foundation/Foundation.h>
#import "Uri.h"
#import "PersonaStatus.h"

@interface Facade : NSObject

@property long facadePtr;

- (instancetype) init:(long) facadePtr :(NSError **) error;

- (void) dealloc;

- (NSNumber *) id;

- (long) getFacadePtrValue;

- (NSNumber *) isNil :(NSError **) error;

- (NSNumber *) getId :(NSError **) error;

- (NSString *) getName :(NSError **) error;

- (NSString *) getSubName :(NSError **) error;

- (Uri *) getUri :(NSError **) error;

- (NSNumber *) isMature :(NSError **) error;

- (NSNumber *) getStatus :(NSError **) error;

@end

#endif /* Facade_h */
