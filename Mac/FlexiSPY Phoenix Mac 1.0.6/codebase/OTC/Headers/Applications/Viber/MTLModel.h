/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

//#import "NSObject.h"

//#import "NSCoding-Protocol.h"
//#import "NSCopying-Protocol.h"

@class NSDictionary, RACSignal;

@interface MTLModel : NSObject //<NSCoding, NSCopying>
{
}

+ (id)strongPropertyKeys;
+ (id)propertyKeys;
+ (void)enumeratePropertiesUsingBlock:(id)arg1;
+ (id)modelWithDictionary:(id)arg1 error:(id *)arg2;
+ (void)processChangedKeys:(id)arg1 forRelationKey:(id)arg2 relationClass:(Class)arg3;
+ (id)changedKeysForManagedObjectChangedKeyPaths:(id)arg1;
+ (BOOL)supportsSecureCoding;
+ (id)allowedSecureCodingClassesByPropertyKey;
+ (id)encodingBehaviorsByPropertyKey;
+ (unsigned int)modelVersion;
+ (id)dictionaryValueFromArchivedExternalRepresentation:(id)arg1 version:(unsigned int)arg2;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (id)debugDescription;
- (id)debugDescriptionForKeySet:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)validate:(id *)arg1;
- (void)mergeValuesForKeysFromModel:(id)arg1;
- (void)mergeValueForKey:(id)arg1 fromModel:(id)arg2;
@property(readonly, copy, nonatomic) NSDictionary *dictionaryValue;
- (id)initWithDictionary:(id)arg1 error:(id *)arg2;
- (id)init;
@property(readonly, nonatomic) RACSignal *updates;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)decodeValueForKey:(id)arg1 withCoder:(id)arg2 modelVersion:(unsigned int)arg3;

@end

