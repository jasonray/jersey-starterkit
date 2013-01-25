#import "enunciate-common.h"

@class ENUNCIATENS0Persona;
@class ENUNCIATENS0Name;
@class ENUNCIATENS0SocialGroup;

#ifndef DEF_ENUNCIATENS0Persona_H
#define DEF_ENUNCIATENS0Persona_H

/**
 *  @author Ryan Heaton

 */
@interface ENUNCIATENS0Persona : NSObject <EnunciateXML>
{
  @private
    NSString *_identifier;
    NSString *_email;
    NSString *_alias;
    NSArray *_groups;
    ENUNCIATENS0Name *_name;
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
- (NSArray *) groups;

/**
 * (no documentation provided)
 */
- (void) setGroups: (NSArray *) newGroups;

/**
 * (no documentation provided)
 */
- (ENUNCIATENS0Name *) name;

/**
 * (no documentation provided)
 */
- (void) setName: (ENUNCIATENS0Name *) newName;

/**
 * (no documentation provided)
 */
- (NSData *) picture;

/**
 * (no documentation provided)
 */
- (void) setPicture: (NSData *) newPicture;
@end /* interface ENUNCIATENS0Persona */

#endif /* DEF_ENUNCIATENS0Persona_H */
#ifndef DEF_ENUNCIATENS0Name_H
#define DEF_ENUNCIATENS0Name_H

/**
 *  @author Ryan Heaton

 */
@interface ENUNCIATENS0Name : NSObject
{
  @private
    NSString *_givenName;
    NSString *_surname;
}

/**
 * (no documentation provided)
 */
- (NSString *) givenName;

/**
 * (no documentation provided)
 */
- (void) setGivenName: (NSString *) newGivenName;

/**
 * (no documentation provided)
 */
- (NSString *) surname;

/**
 * (no documentation provided)
 */
- (void) setSurname: (NSString *) newSurname;
@end /* interface ENUNCIATENS0Name */

#endif /* DEF_ENUNCIATENS0Name_H */
#ifndef DEF_ENUNCIATENS0SocialGroup_H
#define DEF_ENUNCIATENS0SocialGroup_H

/**
 *  @author Ryan Heaton

 */
@interface ENUNCIATENS0SocialGroup : NSObject <EnunciateXML>
{
  @private
    NSString *_identifier;
    NSArray *_memberIds;
    NSString *_groupLeaderId;
    BOOL _exclusive;
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
- (NSArray *) memberIds;

/**
 * (no documentation provided)
 */
- (void) setMemberIds: (NSArray *) newMemberIds;

/**
 * (no documentation provided)
 */
- (NSString *) groupLeaderId;

/**
 * (no documentation provided)
 */
- (void) setGroupLeaderId: (NSString *) newGroupLeaderId;

/**
 * (no documentation provided)
 */
- (BOOL) exclusive;

/**
 * (no documentation provided)
 */
- (void) setExclusive: (BOOL) newExclusive;
@end /* interface ENUNCIATENS0SocialGroup */

#endif /* DEF_ENUNCIATENS0SocialGroup_H */
