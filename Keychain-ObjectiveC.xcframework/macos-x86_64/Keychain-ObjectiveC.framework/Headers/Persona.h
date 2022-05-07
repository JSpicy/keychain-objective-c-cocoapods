//
//  Persona.h
//  Keychain
//
//  Created by Robert Ellis on 2021/12/29.
//

#ifndef Persona_h
#define Persona_h

#import <Foundation/Foundation.h>
#import "Facade.h"

@interface Persona : Facade

- (instancetype) init:(long) personaPtr :(NSError **) error;

- (long) getPersonaPtr;

- (NSNumber *) id;

- (NSNumber *) isNil :(NSError **) error;

- (NSNumber *) getId :(NSError **) error;

- (NSString *) getName :(NSError **) error;

- (NSString *) getSubName :(NSError **) error;

- (Uri *) getUri :(NSError **) error;

- (NSNumber *) isMature :(NSError **) error;

- (NSNumber *) getStatus :(NSError **) error;

@end

#endif /* Persona_h */
