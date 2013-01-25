#import "enunciate-common.h"

@class IFYOUWANNABECOOLLINKSocialGroup;
@class IFYOUWANNABECOOLPERSONAPersona;
@class IFYOUWANNABECOOLPERSONAName;

#ifndef DEF_IFYOUWANNABECOOLLINKSocialGroup_H
#define DEF_IFYOUWANNABECOOLLINKSocialGroup_H

/**
 *  A social group.

 @author Ryan Heaton

 */
@interface IFYOUWANNABECOOLLINKSocialGroup : NSObject <EnunciateXML>
{
  @private
    NSString *_identifier;
    NSArray *_memberIds;
    NSString *_groupLeaderId;
    BOOL _exclusive;
}

/**
 * The id of the social group.
 */
- (NSString *) identifier;

/**
 * The id of the social group.
 */
- (void) setIdentifier: (NSString *) newIdentifier;

/**
 * The ids of the members in the social group.
 */
- (NSArray *) memberIds;

/**
 * The ids of the members in the social group.
 */
- (void) setMemberIds: (NSArray *) newMemberIds;

/**
 * The id of the group leader.
 */
- (NSString *) groupLeaderId;

/**
 * The id of the group leader.
 */
- (void) setGroupLeaderId: (NSString *) newGroupLeaderId;

/**
 * Whether the group is exclusive.
 */
- (BOOL) exclusive;

/**
 * Whether the group is exclusive.
 */
- (void) setExclusive: (BOOL) newExclusive;
@end /* interface IFYOUWANNABECOOLLINKSocialGroup */

#endif /* DEF_IFYOUWANNABECOOLLINKSocialGroup_H */
#ifndef DEF_IFYOUWANNABECOOLPERSONAPersona_H
#define DEF_IFYOUWANNABECOOLPERSONAPersona_H

/**
 *  @author Ryan Heaton

 */
@interface IFYOUWANNABECOOLPERSONAPersona : NSObject <EnunciateXML>
{
  @private
    NSString *_identifier;
    NSString *_email;
    NSString *_alias;
    IFYOUWANNABECOOLPERSONAName *_name;
    NSData *_picture;
}

/**
 * (no documentation provided)
 */
- (NSString *) identifier;

/**
 * (no documentation provided)
 */
- (void) setIdentifier: (NSString *) newIdentifier;

/**
 * (no documentation provided)
 */
- (NSString *) email;

/**
 * (no documentation provided)
 */
- (void) setEmail: (NSString *) newEmail;

/**
 * (no documentation provided)
 */
- (NSString *) alias;

/**
 * (no documentation provided)
 */
- (void) setAlias: (NSString *) newAlias;

/**
 * (no documentation provided)
 */
- (IFYOUWANNABECOOLPERSONAName *) name;

/**
 * (no documentation provided)
 */
- (void) setName: (IFYOUWANNABECOOLPERSONAName *) newName;

/**
 * (no documentation provided)
 */
- (NSData *) picture;

/**
 * (no documentation provided)
 */
- (void) setPicture: (NSData *) newPicture;
@end /* interface IFYOUWANNABECOOLPERSONAPersona */

#endif /* DEF_IFYOUWANNABECOOLPERSONAPersona_H */
#ifndef DEF_IFYOUWANNABECOOLPERSONAName_H
#define DEF_IFYOUWANNABECOOLPERSONAName_H

/**
 *  A name of a persona.

 @author Ryan Heaton

 */
@interface IFYOUWANNABECOOLPERSONAName : NSObject
{
  @private
    NSString *_givenName;
    NSString *_surname;
}

/**
 * The given name.
 */
- (NSString *) givenName;

/**
 * The given name.
 */
- (void) setGivenName: (NSString *) newGivenName;

/**
 * The surname.
 */
- (NSString *) surname;

/**
 * The surname.
 */
- (void) setSurname: (NSString *) newSurname;
@end /* interface IFYOUWANNABECOOLPERSONAName */

#endif /* DEF_IFYOUWANNABECOOLPERSONAName_H */
