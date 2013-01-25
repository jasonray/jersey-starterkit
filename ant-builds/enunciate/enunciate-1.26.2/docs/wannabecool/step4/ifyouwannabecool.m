#import "ifyouwannabecool.h"
#ifndef DEF_IFYOUWANNABECOOLLINKSocialGroup_M
#define DEF_IFYOUWANNABECOOLLINKSocialGroup_M

/**
 *  A social group.

 @author Ryan Heaton

 */
@implementation IFYOUWANNABECOOLLINKSocialGroup

/**
 * The id of the social group.
 */
- (NSString *) identifier
{
  return _identifier;
}

/**
 * The id of the social group.
 */
- (void) setIdentifier: (NSString *) newIdentifier
{
  [newIdentifier retain];
  [_identifier release];
  _identifier = newIdentifier;
}

/**
 * The ids of the members in the social group.
 */
- (NSArray *) memberIds
{
  return _memberIds;
}

/**
 * The ids of the members in the social group.
 */
- (void) setMemberIds: (NSArray *) newMemberIds
{
  [newMemberIds retain];
  [_memberIds release];
  _memberIds = newMemberIds;
}

/**
 * The id of the group leader.
 */
- (NSString *) groupLeaderId
{
  return _groupLeaderId;
}

/**
 * The id of the group leader.
 */
- (void) setGroupLeaderId: (NSString *) newGroupLeaderId
{
  [newGroupLeaderId retain];
  [_groupLeaderId release];
  _groupLeaderId = newGroupLeaderId;
}

/**
 * Whether the group is exclusive.
 */
- (BOOL) exclusive
{
  return _exclusive;
}

/**
 * Whether the group is exclusive.
 */
- (void) setExclusive: (BOOL) newExclusive
{
  _exclusive = newExclusive;
}

- (void) dealloc
{
  [self setIdentifier: nil];
  [self setMemberIds: nil];
  [self setGroupLeaderId: nil];
  [super dealloc];
}

//documentation inherited.
+ (id<EnunciateXML>) readFromXML: (NSData *) xml
{
  IFYOUWANNABECOOLLINKSocialGroup *_iFYOUWANNABECOOLLINKSocialGroup;
  xmlTextReaderPtr reader = xmlReaderForMemory([xml bytes], [xml length], NULL, NULL, 0);
  if (reader == NULL) {
    [NSException raise: @"XMLReadError"
                 format: @"Error instantiating an XML reader."];
    return nil;
  }

  _iFYOUWANNABECOOLLINKSocialGroup = (IFYOUWANNABECOOLLINKSocialGroup *) [IFYOUWANNABECOOLLINKSocialGroup readXMLElement: reader];
  xmlFreeTextReader(reader); //free the reader
  return _iFYOUWANNABECOOLLINKSocialGroup;
}

//documentation inherited.
- (NSData *) writeToXML
{
  xmlBufferPtr buf;
  xmlTextWriterPtr writer;
  int rc;
  NSData *data;

  buf = xmlBufferCreate();
  if (buf == NULL) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error creating an XML buffer."];
    return nil;
  }

  writer = xmlNewTextWriterMemory(buf, 0);
  if (writer == NULL) {
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error creating an XML writer."];
    return nil;
  }

  rc = xmlTextWriterStartDocument(writer, NULL, "utf-8", NULL);
  if (rc < 0) {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing XML start document."];
    return nil;
  }

  NS_DURING
  {
    [self writeXMLElement: writer];
  }
  NS_HANDLER
  {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [localException raise];
  }
  NS_ENDHANDLER

  rc = xmlTextWriterEndDocument(writer);
  if (rc < 0) {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing XML end document."];
    return nil;
  }

  xmlFreeTextWriter(writer);
  data = [NSData dataWithBytes: buf->content length: buf->use];
  xmlBufferFree(buf);
  return data;
}
@end /* implementation IFYOUWANNABECOOLLINKSocialGroup */

/**
 * Internal, private interface for JAXB reading and writing.
 */
@interface IFYOUWANNABECOOLLINKSocialGroup (JAXB) <JAXBReading, JAXBWriting, JAXBType, JAXBElement>

@end /*interface IFYOUWANNABECOOLLINKSocialGroup (JAXB)*/

/**
 * Internal, private implementation for JAXB reading and writing.
 */
@implementation IFYOUWANNABECOOLLINKSocialGroup (JAXB)

/**
 * Read an instance of IFYOUWANNABECOOLLINKSocialGroup from an XML reader.
 *
 * @param reader The reader.
 * @return An instance of IFYOUWANNABECOOLLINKSocialGroup defined by the XML reader.
 */
+ (id<JAXBType>) readXMLType: (xmlTextReaderPtr) reader
{
  IFYOUWANNABECOOLLINKSocialGroup *_iFYOUWANNABECOOLLINKSocialGroup = [[IFYOUWANNABECOOLLINKSocialGroup alloc] init];
  NS_DURING
  {
    [_iFYOUWANNABECOOLLINKSocialGroup initWithReader: reader];
  }
  NS_HANDLER
  {
    _iFYOUWANNABECOOLLINKSocialGroup = nil;
    [localException raise];
  }
  NS_ENDHANDLER

  [_iFYOUWANNABECOOLLINKSocialGroup autorelease];
  return _iFYOUWANNABECOOLLINKSocialGroup;
}

/**
 * Initialize this instance of IFYOUWANNABECOOLLINKSocialGroup according to
 * the XML being read from the reader.
 *
 * @param reader The reader.
 */
- (id) initWithReader: (xmlTextReaderPtr) reader
{
  return [super initWithReader: reader];
}

/**
 * Write the XML for this instance of IFYOUWANNABECOOLLINKSocialGroup to the writer.
 * Note that since we're only writing the XML type,
 * No start/end element will be written.
 *
 * @param reader The reader.
 */
- (void) writeXMLType: (xmlTextWriterPtr) writer
{
  [super writeXMLType:writer];
}

/**
 * Reads a IFYOUWANNABECOOLLINKSocialGroup from an XML reader. The element to be read is
 * "{http://api.ifyouwannabecool.com/link}socialGroup".
 *
 * @param reader The XML reader.
 * @return The IFYOUWANNABECOOLLINKSocialGroup.
 */
+ (id<JAXBElement>) readXMLElement: (xmlTextReaderPtr) reader {
  int status;
  IFYOUWANNABECOOLLINKSocialGroup *_socialGroup = nil;

  if (xmlTextReaderNodeType(reader) != XML_READER_TYPE_ELEMENT) {
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
    if (status < 1) {
      [NSException raise: @"XMLReadError"
                   format: @"Error advancing the reader to start element {http://api.ifyouwannabecool.com/link}socialGroup."];
    }
  }

  if (xmlStrcmp(BAD_CAST "socialGroup", xmlTextReaderConstLocalName(reader)) == 0
      && xmlStrcmp(BAD_CAST "http://api.ifyouwannabecool.com/link", xmlTextReaderConstNamespaceUri(reader)) == 0) {
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read root element {http://api.ifyouwannabecool.com/link}socialGroup.");
#endif
    _socialGroup = (IFYOUWANNABECOOLLINKSocialGroup *)[IFYOUWANNABECOOLLINKSocialGroup readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Successfully read root element {http://api.ifyouwannabecool.com/link}socialGroup.");
#endif
  }
  else {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read IFYOUWANNABECOOLLINKSocialGroup. Expected element {http://api.ifyouwannabecool.com/link}socialGroup. Current element: {}%s", xmlTextReaderConstLocalName(reader)];
    }
    else {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read IFYOUWANNABECOOLLINKSocialGroup. Expected element {http://api.ifyouwannabecool.com/link}socialGroup. Current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader)];
    }
  }

  return _socialGroup;
}

/**
 * Writes this IFYOUWANNABECOOLLINKSocialGroup to XML under element name "{http://api.ifyouwannabecool.com/link}socialGroup".
 * The namespace declarations for the element will be written.
 *
 * @param writer The XML writer.
 * @param _socialGroup The SocialGroup to write.
 * @return 1 if successful, 0 otherwise.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer
{
  [self writeXMLElement: writer writeNamespaces: YES];
}

/**
 * Writes this IFYOUWANNABECOOLLINKSocialGroup to an XML writer.
 *
 * @param writer The writer.
 * @param writeNs Whether to write the namespaces for this element to the xml writer.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer writeNamespaces: (BOOL) writeNs
{
  int rc = xmlTextWriterStartElementNS(writer, BAD_CAST "link", BAD_CAST "socialGroup", NULL);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing start element {http://api.ifyouwannabecool.com/link}socialGroup. XML writer status: %i\n", rc];
  }

  if (writeNs) {
#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing namespaces for start element {http://api.ifyouwannabecool.com/link}socialGroup...");
#endif

    rc = xmlTextWriterWriteAttribute(writer, BAD_CAST "xmlns:link", BAD_CAST "http://api.ifyouwannabecool.com/link");
    if (rc < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing attribute 'xmlns:link' on '{http://api.ifyouwannabecool.com/link}socialGroup'. XML writer status: %i\n", rc];
    }
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote namespaces for start element {http://api.ifyouwannabecool.com/link}socialGroup...");
#endif
  }

#if DEBUG_ENUNCIATE > 1
  NSLog(@"writing type {http://api.ifyouwannabecool.com/link}socialGroup for root element {http://api.ifyouwannabecool.com/link}socialGroup...");
#endif
  [self writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
  NSLog(@"successfully wrote type {http://api.ifyouwannabecool.com/link}socialGroup for root element {http://api.ifyouwannabecool.com/link}socialGroup...");
#endif
  rc = xmlTextWriterEndElement(writer);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing end element {http://api.ifyouwannabecool.com/link}socialGroup. XML writer status: %i\n", rc];
  }
}

//documentation inherited.
- (BOOL) readJAXBAttribute: (xmlTextReaderPtr) reader
{
  void *_child_accessor;

  if ([super readJAXBAttribute: reader]) {
    return YES;
  }

  return NO;
}

//documentation inherited.
- (BOOL) readJAXBValue: (xmlTextReaderPtr) reader
{
  return [super readJAXBValue: reader];
}

//documentation inherited.
- (BOOL) readJAXBChildElement: (xmlTextReaderPtr) reader
{
  id __child;
  void *_child_accessor;
  int status, depth;

  if ([super readJAXBChildElement: reader]) {
    return YES;
  }
  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "id", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}id of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}id of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setIdentifier: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "memberIds", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}memberIds of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}memberIds of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    if ([self memberIds]) {
      [self setMemberIds: [[self memberIds] arrayByAddingObject: __child]];
    }
    else {
      [self setMemberIds: [NSArray arrayWithObject: __child]];
    }
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "groupLeaderId", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}groupLeaderId of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}groupLeaderId of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setGroupLeaderId: __child];
    return YES;
  } //end "if choice"


  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "exclusive", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

    _child_accessor = xmlTextReaderReadBooleanType(reader);
    if (_child_accessor == NULL) {
      //panic: unable to return the value for some reason.
      [NSException raise: @"XMLReadError"
                   format: @"Error reading element value."];
    }
    [self setExclusive: *((BOOL*) _child_accessor)];
    free(_child_accessor);
    return YES;
  }

  return NO;
}

//documentation inherited.
- (int) readUnknownJAXBChildElement: (xmlTextReaderPtr) reader
{
  return [super readUnknownJAXBChildElement: reader];
}

//documentation inherited.
- (void) readUnknownJAXBAttribute: (xmlTextReaderPtr) reader
{
  [super readUnknownJAXBAttribute: reader];
}

//documentation inherited.
- (void) writeJAXBAttributes: (xmlTextWriterPtr) writer
{
  int status;

  [super writeJAXBAttributes: writer];

}

//documentation inherited.
- (void) writeJAXBValue: (xmlTextWriterPtr) writer
{
  [super writeJAXBValue: writer];
}

/**
 * Method for writing the child elements.
 *
 * @param writer The writer.
 */
- (void) writeJAXBChildElements: (xmlTextWriterPtr) writer
{
  int status;
  id __item;
  NSEnumerator *__enumerator;

  [super writeJAXBChildElements: writer];

  if ([self identifier]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "id", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}id."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}id...");
#endif
    [[self identifier] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}id...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}id."];
    }
  }
  if ([self memberIds]) {
    __enumerator = [[self memberIds] objectEnumerator];

    while ( (__item = [__enumerator nextObject]) ) {
      status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "memberIds", NULL);
      if (status < 0) {
        [NSException raise: @"XMLWriteError"
                     format: @"Error writing start child element {}memberIds."];
      }

#if DEBUG_ENUNCIATE > 1
      NSLog(@"writing element {}memberIds...");
#endif
      [__item writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
      NSLog(@"successfully wrote element {}memberIds...");
#endif

      status = xmlTextWriterEndElement(writer);
      if (status < 0) {
        [NSException raise: @"XMLWriteError"
                     format: @"Error writing end child element {}memberIds."];
      }
    } //end item iterator.
  }
  if ([self groupLeaderId]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "groupLeaderId", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}groupLeaderId."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}groupLeaderId...");
#endif
    [[self groupLeaderId] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}groupLeaderId...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}groupLeaderId."];
    }
  }
  if (YES) { //always write the primitive element...
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "exclusive", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}exclusive."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}exclusive...");
#endif
    status = xmlTextWriterWriteBooleanType(writer, &_exclusive);
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}exclusive...");
#endif
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing child element {}exclusive."];
    }

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}exclusive."];
    }
  }
}
@end /* implementation IFYOUWANNABECOOLLINKSocialGroup (JAXB) */

#endif /* DEF_IFYOUWANNABECOOLLINKSocialGroup_M */
#ifndef DEF_IFYOUWANNABECOOLPERSONAPersona_M
#define DEF_IFYOUWANNABECOOLPERSONAPersona_M

/**
 *  @author Ryan Heaton

 */
@implementation IFYOUWANNABECOOLPERSONAPersona

/**
 * (no documentation provided)
 */
- (NSString *) identifier
{
  return _identifier;
}

/**
 * (no documentation provided)
 */
- (void) setIdentifier: (NSString *) newIdentifier
{
  [newIdentifier retain];
  [_identifier release];
  _identifier = newIdentifier;
}

/**
 * (no documentation provided)
 */
- (NSString *) email
{
  return _email;
}

/**
 * (no documentation provided)
 */
- (void) setEmail: (NSString *) newEmail
{
  [newEmail retain];
  [_email release];
  _email = newEmail;
}

/**
 * (no documentation provided)
 */
- (NSString *) alias
{
  return _alias;
}

/**
 * (no documentation provided)
 */
- (void) setAlias: (NSString *) newAlias
{
  [newAlias retain];
  [_alias release];
  _alias = newAlias;
}

/**
 * (no documentation provided)
 */
- (IFYOUWANNABECOOLPERSONAName *) name
{
  return _name;
}

/**
 * (no documentation provided)
 */
- (void) setName: (IFYOUWANNABECOOLPERSONAName *) newName
{
  [newName retain];
  [_name release];
  _name = newName;
}

/**
 * (no documentation provided)
 */
- (NSData *) picture
{
  return _picture;
}

/**
 * (no documentation provided)
 */
- (void) setPicture: (NSData *) newPicture
{
  [newPicture retain];
  [_picture release];
  _picture = newPicture;
}

- (void) dealloc
{
  [self setIdentifier: nil];
  [self setEmail: nil];
  [self setAlias: nil];
  [self setName: nil];
  [self setPicture: nil];
  [super dealloc];
}

//documentation inherited.
+ (id<EnunciateXML>) readFromXML: (NSData *) xml
{
  IFYOUWANNABECOOLPERSONAPersona *_iFYOUWANNABECOOLPERSONAPersona;
  xmlTextReaderPtr reader = xmlReaderForMemory([xml bytes], [xml length], NULL, NULL, 0);
  if (reader == NULL) {
    [NSException raise: @"XMLReadError"
                 format: @"Error instantiating an XML reader."];
    return nil;
  }

  _iFYOUWANNABECOOLPERSONAPersona = (IFYOUWANNABECOOLPERSONAPersona *) [IFYOUWANNABECOOLPERSONAPersona readXMLElement: reader];
  xmlFreeTextReader(reader); //free the reader
  return _iFYOUWANNABECOOLPERSONAPersona;
}

//documentation inherited.
- (NSData *) writeToXML
{
  xmlBufferPtr buf;
  xmlTextWriterPtr writer;
  int rc;
  NSData *data;

  buf = xmlBufferCreate();
  if (buf == NULL) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error creating an XML buffer."];
    return nil;
  }

  writer = xmlNewTextWriterMemory(buf, 0);
  if (writer == NULL) {
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error creating an XML writer."];
    return nil;
  }

  rc = xmlTextWriterStartDocument(writer, NULL, "utf-8", NULL);
  if (rc < 0) {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing XML start document."];
    return nil;
  }

  NS_DURING
  {
    [self writeXMLElement: writer];
  }
  NS_HANDLER
  {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [localException raise];
  }
  NS_ENDHANDLER

  rc = xmlTextWriterEndDocument(writer);
  if (rc < 0) {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing XML end document."];
    return nil;
  }

  xmlFreeTextWriter(writer);
  data = [NSData dataWithBytes: buf->content length: buf->use];
  xmlBufferFree(buf);
  return data;
}
@end /* implementation IFYOUWANNABECOOLPERSONAPersona */

/**
 * Internal, private interface for JAXB reading and writing.
 */
@interface IFYOUWANNABECOOLPERSONAPersona (JAXB) <JAXBReading, JAXBWriting, JAXBType, JAXBElement>

@end /*interface IFYOUWANNABECOOLPERSONAPersona (JAXB)*/

/**
 * Internal, private implementation for JAXB reading and writing.
 */
@implementation IFYOUWANNABECOOLPERSONAPersona (JAXB)

/**
 * Read an instance of IFYOUWANNABECOOLPERSONAPersona from an XML reader.
 *
 * @param reader The reader.
 * @return An instance of IFYOUWANNABECOOLPERSONAPersona defined by the XML reader.
 */
+ (id<JAXBType>) readXMLType: (xmlTextReaderPtr) reader
{
  IFYOUWANNABECOOLPERSONAPersona *_iFYOUWANNABECOOLPERSONAPersona = [[IFYOUWANNABECOOLPERSONAPersona alloc] init];
  NS_DURING
  {
    [_iFYOUWANNABECOOLPERSONAPersona initWithReader: reader];
  }
  NS_HANDLER
  {
    _iFYOUWANNABECOOLPERSONAPersona = nil;
    [localException raise];
  }
  NS_ENDHANDLER

  [_iFYOUWANNABECOOLPERSONAPersona autorelease];
  return _iFYOUWANNABECOOLPERSONAPersona;
}

/**
 * Initialize this instance of IFYOUWANNABECOOLPERSONAPersona according to
 * the XML being read from the reader.
 *
 * @param reader The reader.
 */
- (id) initWithReader: (xmlTextReaderPtr) reader
{
  return [super initWithReader: reader];
}

/**
 * Write the XML for this instance of IFYOUWANNABECOOLPERSONAPersona to the writer.
 * Note that since we're only writing the XML type,
 * No start/end element will be written.
 *
 * @param reader The reader.
 */
- (void) writeXMLType: (xmlTextWriterPtr) writer
{
  [super writeXMLType:writer];
}

/**
 * Reads a IFYOUWANNABECOOLPERSONAPersona from an XML reader. The element to be read is
 * "{http://api.ifyouwannabecool.com/persona}persona".
 *
 * @param reader The XML reader.
 * @return The IFYOUWANNABECOOLPERSONAPersona.
 */
+ (id<JAXBElement>) readXMLElement: (xmlTextReaderPtr) reader {
  int status;
  IFYOUWANNABECOOLPERSONAPersona *_persona = nil;

  if (xmlTextReaderNodeType(reader) != XML_READER_TYPE_ELEMENT) {
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
    if (status < 1) {
      [NSException raise: @"XMLReadError"
                   format: @"Error advancing the reader to start element {http://api.ifyouwannabecool.com/persona}persona."];
    }
  }

  if (xmlStrcmp(BAD_CAST "persona", xmlTextReaderConstLocalName(reader)) == 0
      && xmlStrcmp(BAD_CAST "http://api.ifyouwannabecool.com/persona", xmlTextReaderConstNamespaceUri(reader)) == 0) {
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read root element {http://api.ifyouwannabecool.com/persona}persona.");
#endif
    _persona = (IFYOUWANNABECOOLPERSONAPersona *)[IFYOUWANNABECOOLPERSONAPersona readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Successfully read root element {http://api.ifyouwannabecool.com/persona}persona.");
#endif
  }
  else {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read IFYOUWANNABECOOLPERSONAPersona. Expected element {http://api.ifyouwannabecool.com/persona}persona. Current element: {}%s", xmlTextReaderConstLocalName(reader)];
    }
    else {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read IFYOUWANNABECOOLPERSONAPersona. Expected element {http://api.ifyouwannabecool.com/persona}persona. Current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader)];
    }
  }

  return _persona;
}

/**
 * Writes this IFYOUWANNABECOOLPERSONAPersona to XML under element name "{http://api.ifyouwannabecool.com/persona}persona".
 * The namespace declarations for the element will be written.
 *
 * @param writer The XML writer.
 * @param _persona The Persona to write.
 * @return 1 if successful, 0 otherwise.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer
{
  [self writeXMLElement: writer writeNamespaces: YES];
}

/**
 * Writes this IFYOUWANNABECOOLPERSONAPersona to an XML writer.
 *
 * @param writer The writer.
 * @param writeNs Whether to write the namespaces for this element to the xml writer.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer writeNamespaces: (BOOL) writeNs
{
  int rc = xmlTextWriterStartElementNS(writer, BAD_CAST "persona", BAD_CAST "persona", NULL);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing start element {http://api.ifyouwannabecool.com/persona}persona. XML writer status: %i\n", rc];
  }

  if (writeNs) {
#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing namespaces for start element {http://api.ifyouwannabecool.com/persona}persona...");
#endif

    rc = xmlTextWriterWriteAttribute(writer, BAD_CAST "xmlns:persona", BAD_CAST "http://api.ifyouwannabecool.com/persona");
    if (rc < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing attribute 'xmlns:persona' on '{http://api.ifyouwannabecool.com/persona}persona'. XML writer status: %i\n", rc];
    }
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote namespaces for start element {http://api.ifyouwannabecool.com/persona}persona...");
#endif
  }

#if DEBUG_ENUNCIATE > 1
  NSLog(@"writing type {http://api.ifyouwannabecool.com/persona}persona for root element {http://api.ifyouwannabecool.com/persona}persona...");
#endif
  [self writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
  NSLog(@"successfully wrote type {http://api.ifyouwannabecool.com/persona}persona for root element {http://api.ifyouwannabecool.com/persona}persona...");
#endif
  rc = xmlTextWriterEndElement(writer);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing end element {http://api.ifyouwannabecool.com/persona}persona. XML writer status: %i\n", rc];
  }
}

//documentation inherited.
- (BOOL) readJAXBAttribute: (xmlTextReaderPtr) reader
{
  void *_child_accessor;

  if ([super readJAXBAttribute: reader]) {
    return YES;
  }

  return NO;
}

//documentation inherited.
- (BOOL) readJAXBValue: (xmlTextReaderPtr) reader
{
  return [super readJAXBValue: reader];
}

//documentation inherited.
- (BOOL) readJAXBChildElement: (xmlTextReaderPtr) reader
{
  id __child;
  void *_child_accessor;
  int status, depth;

  if ([super readJAXBChildElement: reader]) {
    return YES;
  }
  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "id", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}id of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}id of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setIdentifier: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "email", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}email of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}email of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setEmail: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "alias", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}alias of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}alias of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setAlias: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "name", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}name of type {http://api.ifyouwannabecool.com/persona}name.");
#endif
    __child = [IFYOUWANNABECOOLPERSONAName readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}name of type {http://api.ifyouwannabecool.com/persona}name.");
#endif

    [self setName: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "picture", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}picture of type {http://www.w3.org/2001/XMLSchema}base64Binary.");
#endif
    __child = [NSData readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}picture of type {http://www.w3.org/2001/XMLSchema}base64Binary.");
#endif

    [self setPicture: __child];
    return YES;
  } //end "if choice"


  return NO;
}

//documentation inherited.
- (int) readUnknownJAXBChildElement: (xmlTextReaderPtr) reader
{
  return [super readUnknownJAXBChildElement: reader];
}

//documentation inherited.
- (void) readUnknownJAXBAttribute: (xmlTextReaderPtr) reader
{
  [super readUnknownJAXBAttribute: reader];
}

//documentation inherited.
- (void) writeJAXBAttributes: (xmlTextWriterPtr) writer
{
  int status;

  [super writeJAXBAttributes: writer];

}

//documentation inherited.
- (void) writeJAXBValue: (xmlTextWriterPtr) writer
{
  [super writeJAXBValue: writer];
}

/**
 * Method for writing the child elements.
 *
 * @param writer The writer.
 */
- (void) writeJAXBChildElements: (xmlTextWriterPtr) writer
{
  int status;
  id __item;
  NSEnumerator *__enumerator;

  [super writeJAXBChildElements: writer];

  if ([self identifier]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "id", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}id."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}id...");
#endif
    [[self identifier] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}id...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}id."];
    }
  }
  if ([self email]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "email", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}email."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}email...");
#endif
    [[self email] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}email...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}email."];
    }
  }
  if ([self alias]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "alias", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}alias."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}alias...");
#endif
    [[self alias] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}alias...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}alias."];
    }
  }
  if ([self name]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "name", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}name."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}name...");
#endif
    [[self name] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}name...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}name."];
    }
  }
  if ([self picture]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "picture", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}picture."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}picture...");
#endif
    [[self picture] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}picture...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}picture."];
    }
  }
}
@end /* implementation IFYOUWANNABECOOLPERSONAPersona (JAXB) */

#endif /* DEF_IFYOUWANNABECOOLPERSONAPersona_M */
#ifndef DEF_IFYOUWANNABECOOLPERSONAName_M
#define DEF_IFYOUWANNABECOOLPERSONAName_M

/**
 *  A name of a persona.

 @author Ryan Heaton

 */
@implementation IFYOUWANNABECOOLPERSONAName

/**
 * The given name.
 */
- (NSString *) givenName
{
  return _givenName;
}

/**
 * The given name.
 */
- (void) setGivenName: (NSString *) newGivenName
{
  [newGivenName retain];
  [_givenName release];
  _givenName = newGivenName;
}

/**
 * The surname.
 */
- (NSString *) surname
{
  return _surname;
}

/**
 * The surname.
 */
- (void) setSurname: (NSString *) newSurname
{
  [newSurname retain];
  [_surname release];
  _surname = newSurname;
}

- (void) dealloc
{
  [self setGivenName: nil];
  [self setSurname: nil];
  [super dealloc];
}
@end /* implementation IFYOUWANNABECOOLPERSONAName */

/**
 * Internal, private interface for JAXB reading and writing.
 */
@interface IFYOUWANNABECOOLPERSONAName (JAXB) <JAXBReading, JAXBWriting, JAXBType>

@end /*interface IFYOUWANNABECOOLPERSONAName (JAXB)*/

/**
 * Internal, private implementation for JAXB reading and writing.
 */
@implementation IFYOUWANNABECOOLPERSONAName (JAXB)

/**
 * Read an instance of IFYOUWANNABECOOLPERSONAName from an XML reader.
 *
 * @param reader The reader.
 * @return An instance of IFYOUWANNABECOOLPERSONAName defined by the XML reader.
 */
+ (id<JAXBType>) readXMLType: (xmlTextReaderPtr) reader
{
  IFYOUWANNABECOOLPERSONAName *_iFYOUWANNABECOOLPERSONAName = [[IFYOUWANNABECOOLPERSONAName alloc] init];
  NS_DURING
  {
    [_iFYOUWANNABECOOLPERSONAName initWithReader: reader];
  }
  NS_HANDLER
  {
    _iFYOUWANNABECOOLPERSONAName = nil;
    [localException raise];
  }
  NS_ENDHANDLER

  [_iFYOUWANNABECOOLPERSONAName autorelease];
  return _iFYOUWANNABECOOLPERSONAName;
}

/**
 * Initialize this instance of IFYOUWANNABECOOLPERSONAName according to
 * the XML being read from the reader.
 *
 * @param reader The reader.
 */
- (id) initWithReader: (xmlTextReaderPtr) reader
{
  return [super initWithReader: reader];
}

/**
 * Write the XML for this instance of IFYOUWANNABECOOLPERSONAName to the writer.
 * Note that since we're only writing the XML type,
 * No start/end element will be written.
 *
 * @param reader The reader.
 */
- (void) writeXMLType: (xmlTextWriterPtr) writer
{
  [super writeXMLType:writer];
}

//documentation inherited.
- (BOOL) readJAXBAttribute: (xmlTextReaderPtr) reader
{
  void *_child_accessor;

  if ([super readJAXBAttribute: reader]) {
    return YES;
  }

  return NO;
}

//documentation inherited.
- (BOOL) readJAXBValue: (xmlTextReaderPtr) reader
{
  return [super readJAXBValue: reader];
}

//documentation inherited.
- (BOOL) readJAXBChildElement: (xmlTextReaderPtr) reader
{
  id __child;
  void *_child_accessor;
  int status, depth;

  if ([super readJAXBChildElement: reader]) {
    return YES;
  }
  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "givenName", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}givenName of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}givenName of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setGivenName: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "surname", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}surname of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}surname of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setSurname: __child];
    return YES;
  } //end "if choice"


  return NO;
}

//documentation inherited.
- (int) readUnknownJAXBChildElement: (xmlTextReaderPtr) reader
{
  return [super readUnknownJAXBChildElement: reader];
}

//documentation inherited.
- (void) readUnknownJAXBAttribute: (xmlTextReaderPtr) reader
{
  [super readUnknownJAXBAttribute: reader];
}

//documentation inherited.
- (void) writeJAXBAttributes: (xmlTextWriterPtr) writer
{
  int status;

  [super writeJAXBAttributes: writer];

}

//documentation inherited.
- (void) writeJAXBValue: (xmlTextWriterPtr) writer
{
  [super writeJAXBValue: writer];
}

/**
 * Method for writing the child elements.
 *
 * @param writer The writer.
 */
- (void) writeJAXBChildElements: (xmlTextWriterPtr) writer
{
  int status;
  id __item;
  NSEnumerator *__enumerator;

  [super writeJAXBChildElements: writer];

  if ([self givenName]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "givenName", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}givenName."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}givenName...");
#endif
    [[self givenName] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}givenName...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}givenName."];
    }
  }
  if ([self surname]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "surname", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}surname."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}surname...");
#endif
    [[self surname] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}surname...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}surname."];
    }
  }
}
@end /* implementation IFYOUWANNABECOOLPERSONAName (JAXB) */

#endif /* DEF_IFYOUWANNABECOOLPERSONAName_M */
