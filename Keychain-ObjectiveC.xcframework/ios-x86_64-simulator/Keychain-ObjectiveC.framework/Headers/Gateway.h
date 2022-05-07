//
//  Gateway.h
//  consumer-app-iphone
//
//  Created by Robert Ellis on 2021/12/17.
//

#ifndef Gateway_h
#define Gateway_h

#import <Foundation/Foundation.h>

#import "Asset.h"
#import "Certificate.h"
#import "Contact.h"
#import "Persona.h"
#import "LedgerResult.h"
#import "SecurityLevel.h"
#import "Constants.h"
#import "WrapperErrorCodes.h"

@interface Gateway : NSObject

@property long settingsPtr;

- (int) version;

- (instancetype) init:(NSString *) configPath
                     :(NSString *) dbPath
                     :(BOOL) force
                     :(NSString *) dropSqlFile
                     :(NSString *) createSqlFile
                     :(NSError **) error;

-(void) dealloc;

- (BOOL) easySetup:(NSString *) name :(NSString *) sub_name :(int) sec_level :(NSError **) error;

- (NSString *) getCommString :(NSError **) error;

- (Asset *) createAsset:(NSString *) symbol :(NSError **) error;

- (NSArray<Asset *> *) getAssets :(NSError **) error;

- (Certificate *) receiveCertificate:(NSString *) certCipherText :(NSError **) error;

- (Certificate *) getHeldCertificate:(Asset *) asset :(NSError **) error;

- (LedgerResult *) transferAsset:(Contact *) contact
                                :(Facade *) approver
                                :(Asset *) asset
                                :(long long) amount
                                :(NSString *) reason
                                :(bool) isIssuance
                                :(NSError **) error;

- (LedgerResult *) updateLedger:(NSString *) trxnStr :(Facade *) approver :(NSError **) error;

- (NSNumber *) getLedgerBalance:(Asset *) asset :(NSError **) error;

- (NSArray<LedgerTransaction *> *) getLedgerTransactions :(NSError **) error;

- (NSArray<LedgerTransaction *> *) getLedgerTransactions:(Asset *) asset :(NSError **) error;

- (NSNumber *) seed:(NSString *) address :(NSMutableArray<NSString *> *) mnemonicList :(NSError **) error;

- (Persona *) createPersona:(NSString *) name :(NSString *) subName :(SecurityLevel) secLevel :(NSError **) error;

- (Persona *) getActivePersona;

- (BOOL) setActivePersona:(Persona *) persona :(NSError **) error;

- (NSNumber *) maturePersonaExists :(NSError **) error;

- (NSArray<Persona *> *) getPersonas :(NSError **) error;

- (BOOL) renewCertificate:(Persona *) persona :(NSError **) error;

- (Contact *) createContact:(NSString *) name :(NSString *) subName :(Uri *) uri :(NSError **) error;

- (NSArray<Contact *> *) getContacts :(NSError **) error;

- (BOOL) deletePersona:(Persona *) persona :(NSError **) error;

- (BOOL) deleteContact:(Contact *) contact :(NSError **) error;

- (BOOL) renamePersona:(Persona *) persona :(NSString *) newName :(NSString *) newSubName :(NSError **) error;

- (BOOL) renameContact:(Contact *) contact :(NSString *) newName :(NSString *) newSubName :(NSError **) error;

- (NSString *) encrypt:(NSString *) clearText :(NSArray<Contact *> *) contacts :(NSError **) error;

- (NSString *) decrypt:(NSString *) cipherText :(NSError **) error;

- (NSString *) sign:(NSString *) clearText :(NSError **) error;

- (NSString *) verify:(NSMutableArray<Verification *> *) verifications :(NSString *) signedMessage :(NSError **) error;

- (NSString *) signThenEncrypt:(NSArray<Contact *> *) contacts :(NSString *) clearText :(NSError **) error;

- (NSString *) decryptThenVerify:(NSString *) cipherText :(NSError **) error;

@end

#endif /* Gateway_h */
