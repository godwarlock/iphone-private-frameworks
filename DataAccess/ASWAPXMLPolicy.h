/**
 * This header is generated by class-dump-z 0.2-1.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

#import "ASPolicy.h"

@class NSString;

@interface ASWAPXMLPolicy : ASPolicy {
	NSString* _data;
}
// inherited: +(BOOL)acceptsTopLevelLeaves;
// inherited: +(BOOL)parsingLeafNode;
// inherited: +(BOOL)parsingWithSubItems;
// inherited: +(BOOL)frontingBasicTypes;
// inherited: -(void)dealloc;
-(id)data;
-(void)_setData:(id)data;
// inherited: -(id)asParseRules;
-(id)_policyForWAPProvisioningXMLData;
// inherited: -(id)processedPolicyData;
@end
