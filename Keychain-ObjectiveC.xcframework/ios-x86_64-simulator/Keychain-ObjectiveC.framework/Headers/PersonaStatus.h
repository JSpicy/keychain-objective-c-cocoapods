//
//  PersonaStatus.h
//  KeychainCore
//
//  Created by Robert Ellis on 2022/01/24.
//

#ifndef PersonaStatus_h
#define PersonaStatus_h

#import <Foundation/Foundation.h>

typedef NS_ENUM(NSInteger, PersonaStatus) {
    unknown = 0,
    created = 1,
    funding = 2,
    broadcasted = 3,
    confirming = 4,
    confirmed = 5,
    expiring = 6,
    expired = 7
};

#endif /* PersonaStatus_h */
