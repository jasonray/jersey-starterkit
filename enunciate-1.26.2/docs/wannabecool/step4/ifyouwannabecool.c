#include <enunciate-common.c>
#ifndef DEF_ifyouwannabecool_persona_name_H
#define DEF_ifyouwannabecool_persona_name_H

/**
 *  A name of a persona.

 @author Ryan Heaton

 */
struct ifyouwannabecool_persona_name {


  /**
   * The given name.
   */
  xmlChar *givenName;

  /**
   * The surname.
   */
  xmlChar *surname;
};

/**
 * Reads a Name from XML. The reader is assumed to be at the start element.
 *
 * @param reader The XML reader.
 * @return The Name, or NULL in case of error.
 */
static struct ifyouwannabecool_persona_name *xmlTextReaderReadPersonaNameType(xmlTextReaderPtr reader);

/**
 * Writes a Name to XML.
 *
 * @param writer The XML writer.
 * @param _name The Name to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWritePersonaNameType(xmlTextWriterPtr writer, struct ifyouwannabecool_persona_name *_name);

/**
 * Frees the elements of a Name.
 *
 * @param _name The Name to free.
 */
static void freePersonaNameType(struct ifyouwannabecool_persona_name *_name);

#endif /* DEF_ifyouwannabecool_persona_name_H */
#ifndef DEF_ifyouwannabecool_persona_persona_H
#define DEF_ifyouwannabecool_persona_persona_H

/**
 *  @author Ryan Heaton

 */
struct ifyouwannabecool_persona_persona {


  /**
   * (no documentation provided)
   */
  xmlChar *id;

  /**
   * (no documentation provided)
   */
  xmlChar *email;

  /**
   * (no documentation provided)
   */
  xmlChar *alias;

  /**
   * (no documentation provided)
   */
  struct ifyouwannabecool_persona_name *name;

  /**
   * (no documentation provided)
   */
  unsigned char *picture;

  /**
   * Size of the picture data.
   */
  int _sizeof_picture;
};

/**
 * Reads a Persona element from XML. The element to be read is "{http://api.ifyouwannabecool.com/persona}persona", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The Persona, or NULL in case of error.
 */
struct ifyouwannabecool_persona_persona *xml_read_ifyouwannabecool_persona_persona(xmlTextReaderPtr reader);

/**
 * Writes a Persona to XML under element name "{http://api.ifyouwannabecool.com/persona}persona".
 *
 * @param writer The XML writer.
 * @param _persona The Persona to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
int xml_write_ifyouwannabecool_persona_persona(xmlTextWriterPtr writer, struct ifyouwannabecool_persona_persona *_persona);

/**
 * Frees a Persona.
 *
 * @param _persona The Persona to free.
 */
void free_ifyouwannabecool_persona_persona(struct ifyouwannabecool_persona_persona *_persona);

/**
 * Reads a Persona element from XML. The element to be read is "{http://api.ifyouwannabecool.com/persona}persona", and
 * it is assumed that the reader is already pointing to the element.
 *
 * @param reader The XML reader.
 * @return The Persona, or NULL in case of error.
 */
struct ifyouwannabecool_persona_persona *xmlTextReaderReadPersonaPersonaElement(xmlTextReaderPtr reader);

/**
 * Writes a Persona to XML under element name "{http://api.ifyouwannabecool.com/persona}persona".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _persona The Persona to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWritePersonaPersonaElement(xmlTextWriterPtr writer, struct ifyouwannabecool_persona_persona *_persona);

/**
 * Writes a Persona to XML under element name "{http://api.ifyouwannabecool.com/persona}persona".
 *
 * @param writer The XML writer.
 * @param _persona The Persona to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWritePersonaPersonaElementNS(xmlTextWriterPtr writer, struct ifyouwannabecool_persona_persona *_persona, int writeNamespaces);

/**
 * Frees the children of a Persona.
 *
 * @param _persona The Persona whose children are to be free.
 */
static void freePersonaPersonaElement(struct ifyouwannabecool_persona_persona *_persona);

/**
 * Reads a Persona from XML. The reader is assumed to be at the start element.
 *
 * @param reader The XML reader.
 * @return The Persona, or NULL in case of error.
 */
static struct ifyouwannabecool_persona_persona *xmlTextReaderReadPersonaPersonaType(xmlTextReaderPtr reader);

/**
 * Writes a Persona to XML.
 *
 * @param writer The XML writer.
 * @param _persona The Persona to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWritePersonaPersonaType(xmlTextWriterPtr writer, struct ifyouwannabecool_persona_persona *_persona);

/**
 * Frees the elements of a Persona.
 *
 * @param _persona The Persona to free.
 */
static void freePersonaPersonaType(struct ifyouwannabecool_persona_persona *_persona);

#endif /* DEF_ifyouwannabecool_persona_persona_H */
#ifndef DEF_ifyouwannabecool_link_socialGroup_H
#define DEF_ifyouwannabecool_link_socialGroup_H

/**
 *  A social group.

 @author Ryan Heaton

 */
struct ifyouwannabecool_link_socialGroup {


  /**
   * The id of the social group.
   */
  xmlChar *id;

  /**
   * The ids of the members in the social group.
   */
  xmlChar *memberIds;

  /**
   * Size of the memberIds array.
   */
  int _sizeof_memberIds;

  /**
   * The id of the group leader.
   */
  xmlChar *groupLeaderId;

  /**
   * Whether the group is exclusive.
   */
  int exclusive;
};

/**
 * Reads a SocialGroup element from XML. The element to be read is "{http://api.ifyouwannabecool.com/link}socialGroup", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The SocialGroup, or NULL in case of error.
 */
struct ifyouwannabecool_link_socialGroup *xml_read_ifyouwannabecool_link_socialGroup(xmlTextReaderPtr reader);

/**
 * Writes a SocialGroup to XML under element name "{http://api.ifyouwannabecool.com/link}socialGroup".
 *
 * @param writer The XML writer.
 * @param _socialGroup The SocialGroup to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
int xml_write_ifyouwannabecool_link_socialGroup(xmlTextWriterPtr writer, struct ifyouwannabecool_link_socialGroup *_socialGroup);

/**
 * Frees a SocialGroup.
 *
 * @param _socialGroup The SocialGroup to free.
 */
void free_ifyouwannabecool_link_socialGroup(struct ifyouwannabecool_link_socialGroup *_socialGroup);

/**
 * Reads a SocialGroup element from XML. The element to be read is "{http://api.ifyouwannabecool.com/link}socialGroup", and
 * it is assumed that the reader is already pointing to the element.
 *
 * @param reader The XML reader.
 * @return The SocialGroup, or NULL in case of error.
 */
struct ifyouwannabecool_link_socialGroup *xmlTextReaderReadLinkSocialGroupElement(xmlTextReaderPtr reader);

/**
 * Writes a SocialGroup to XML under element name "{http://api.ifyouwannabecool.com/link}socialGroup".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _socialGroup The SocialGroup to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteLinkSocialGroupElement(xmlTextWriterPtr writer, struct ifyouwannabecool_link_socialGroup *_socialGroup);

/**
 * Writes a SocialGroup to XML under element name "{http://api.ifyouwannabecool.com/link}socialGroup".
 *
 * @param writer The XML writer.
 * @param _socialGroup The SocialGroup to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteLinkSocialGroupElementNS(xmlTextWriterPtr writer, struct ifyouwannabecool_link_socialGroup *_socialGroup, int writeNamespaces);

/**
 * Frees the children of a SocialGroup.
 *
 * @param _socialGroup The SocialGroup whose children are to be free.
 */
static void freeLinkSocialGroupElement(struct ifyouwannabecool_link_socialGroup *_socialGroup);

/**
 * Reads a SocialGroup from XML. The reader is assumed to be at the start element.
 *
 * @param reader The XML reader.
 * @return The SocialGroup, or NULL in case of error.
 */
static struct ifyouwannabecool_link_socialGroup *xmlTextReaderReadLinkSocialGroupType(xmlTextReaderPtr reader);

/**
 * Writes a SocialGroup to XML.
 *
 * @param writer The XML writer.
 * @param _socialGroup The SocialGroup to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteLinkSocialGroupType(xmlTextWriterPtr writer, struct ifyouwannabecool_link_socialGroup *_socialGroup);

/**
 * Frees the elements of a SocialGroup.
 *
 * @param _socialGroup The SocialGroup to free.
 */
static void freeLinkSocialGroupType(struct ifyouwannabecool_link_socialGroup *_socialGroup);

#endif /* DEF_ifyouwannabecool_link_socialGroup_H */
#ifndef DEF_ifyouwannabecool_persona_name_M
#define DEF_ifyouwannabecool_persona_name_M

/**
 * Reads a Name from XML. The reader is assumed to be at the start element.
 *
 * @return the Name, or NULL in case of error.
 */
static struct ifyouwannabecool_persona_name *xmlTextReaderReadPersonaNameType(xmlTextReaderPtr reader) {
  int status, depth;
  void *_child_accessor;
  struct ifyouwannabecool_persona_name *_name = calloc(1, sizeof(struct ifyouwannabecool_persona_name));



  if (xmlTextReaderIsEmptyElement(reader) == 0) {
    depth = xmlTextReaderDepth(reader);//track the depth.
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);

    while (xmlTextReaderDepth(reader) > depth) {
      if (status < 1) {
        //panic: XML read error.
#if DEBUG_ENUNCIATE
        printf("Failure to advance to next child element.\n");
#endif
        freePersonaNameType(_name);
        free(_name);
        return NULL;
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "givenName", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}givenName of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}givenName of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freePersonaNameType(_name);
          free(_name);
          return NULL;
        }

        _name->givenName = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "surname", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}surname of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}surname of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freePersonaNameType(_name);
          free(_name);
          return NULL;
        }

        _name->surname = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else {
#if DEBUG_ENUNCIATE > 1
        if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
          printf("unknown child element {}%s for type {http://api.ifyouwannabecool.com/persona}name.  Skipping...\n",  xmlTextReaderConstLocalName(reader));
        }
        else {
          printf("unknown child element {%s}%s for type {http://api.ifyouwannabecool.com/persona}name. Skipping...\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
        }
#endif
        status = xmlTextReaderSkipElement(reader);
      }
    }
  }

  return _name;
}

/**
 * Writes a Name to XML.
 *
 * @param writer The XML writer.
 * @param _name The Name to write.
 * @return The total bytes written, or -1 on error;
 */
static int xmlTextWriterWritePersonaNameType(xmlTextWriterPtr writer, struct ifyouwannabecool_persona_name *_name) {
  int status, totalBytes = 0, i;
  xmlChar *binaryData;
  if (_name->givenName != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "givenName", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}givenName. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}givenName...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_name->givenName));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}givenName. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}givenName. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_name->surname != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "surname", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}surname. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}surname...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_name->surname));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}surname. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}surname. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }

  return totalBytes;
}

/**
 * Frees the elements of a Name.
 *
 * @param _name The Name to free.
 */
static void freePersonaNameType(struct ifyouwannabecool_persona_name *_name) {
  int i;
  if (_name->givenName != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor givenName of type ifyouwannabecool_persona_name...\n");
#endif
    freeXsStringType(_name->givenName);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor givenName of type ifyouwannabecool_persona_name...\n");
#endif
    free(_name->givenName);
  }
  if (_name->surname != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor surname of type ifyouwannabecool_persona_name...\n");
#endif
    freeXsStringType(_name->surname);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor surname of type ifyouwannabecool_persona_name...\n");
#endif
    free(_name->surname);
  }
}
#endif /* DEF_ifyouwannabecool_persona_name_M */
#ifndef DEF_ifyouwannabecool_persona_persona_M
#define DEF_ifyouwannabecool_persona_persona_M

/**
 * Reads a Persona element from XML. The element to be read is "{http://api.ifyouwannabecool.com/persona}persona", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The Persona, or NULL in case of error.
 */
struct ifyouwannabecool_persona_persona *xml_read_ifyouwannabecool_persona_persona(xmlTextReaderPtr reader) {
  int status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
  return xmlTextReaderReadPersonaPersonaElement(reader);
}

/**
 * Writes a Persona to XML under element name "{http://api.ifyouwannabecool.com/persona}persona".
 *
 * @param writer The XML writer.
 * @param _persona The Persona to write.
 * @return 1 if successful, 0 otherwise.
 */
int xml_write_ifyouwannabecool_persona_persona(xmlTextWriterPtr writer, struct ifyouwannabecool_persona_persona *_persona) {
  return xmlTextWriterWritePersonaPersonaElementNS(writer, _persona, 1);
}

/**
 * Frees a Persona.
 *
 * @param _persona The Persona to free.
 */
void free_ifyouwannabecool_persona_persona(struct ifyouwannabecool_persona_persona *_persona) {
  freePersonaPersonaType(_persona);
  free(_persona);
}

/**
 * Reads a Persona element from XML. The element to be read is "{http://api.ifyouwannabecool.com/persona}persona", and
 * it is assumed that the reader is pointing to that element.
 *
 * @param reader The XML reader.
 * @return The Persona, or NULL in case of error.
 */
struct ifyouwannabecool_persona_persona *xmlTextReaderReadPersonaPersonaElement(xmlTextReaderPtr reader) {
  struct ifyouwannabecool_persona_persona *_persona = NULL;

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "persona", xmlTextReaderConstLocalName(reader)) == 0
    && xmlStrcmp(BAD_CAST "http://api.ifyouwannabecool.com/persona", xmlTextReaderConstNamespaceUri(reader)) == 0) {
#if DEBUG_ENUNCIATE > 1
    printf("Attempting to read root element {http://api.ifyouwannabecool.com/persona}persona.\n");
#endif
    _persona = xmlTextReaderReadPersonaPersonaType(reader);
  }
#if DEBUG_ENUNCIATE
  if (_persona == NULL) {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      printf("attempt to read {http://api.ifyouwannabecool.com/persona}persona failed. current element: {}%s\n",  xmlTextReaderConstLocalName(reader));
    }
    else {
      printf("attempt to read {http://api.ifyouwannabecool.com/persona}persona failed. current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
    }
  }
#endif

  return _persona;
}

/**
 * Writes a Persona to XML under element name "{http://api.ifyouwannabecool.com/persona}persona".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _persona The Persona to write.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWritePersonaPersonaElement(xmlTextWriterPtr writer, struct ifyouwannabecool_persona_persona *_persona) {
  return xmlTextWriterWritePersonaPersonaElementNS(writer, _persona, 0);
}

/**
 * Writes a Persona to XML under element name "{http://api.ifyouwannabecool.com/persona}persona".
 *
 * @param writer The XML writer.
 * @param _persona The Persona to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWritePersonaPersonaElementNS(xmlTextWriterPtr writer, struct ifyouwannabecool_persona_persona *_persona, int writeNamespaces) {
  int totalBytes = 0;
  int status;

  status = xmlTextWriterStartElementNS(writer, BAD_CAST "persona", BAD_CAST "persona", NULL);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write start element {http://api.ifyouwannabecool.com/persona}persona. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  if (writeNamespaces) {
#if DEBUG_ENUNCIATE > 1
    printf("writing namespaces for start element {http://api.ifyouwannabecool.com/persona}persona...\n");
#endif

    status = xmlTextWriterWriteAttribute(writer, BAD_CAST "xmlns:persona", BAD_CAST "http://api.ifyouwannabecool.com/persona");
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("unable to write namespace attribute xmlns:persona. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }

#if DEBUG_ENUNCIATE > 1
  printf("writing type {http://api.ifyouwannabecool.com/persona}persona for root element {http://api.ifyouwannabecool.com/persona}persona...\n");
#endif
  status = xmlTextWriterWritePersonaPersonaType(writer, _persona);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write type for start element {http://api.ifyouwannabecool.com/persona}persona. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  status = xmlTextWriterEndElement(writer);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to end element {http://api.ifyouwannabecool.com/persona}persona. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  return totalBytes;
}

/**
 * Frees the children of a Persona.
 *
 * @param _persona The Persona whose children are to be free.
 */
static void freePersonaPersonaElement(struct ifyouwannabecool_persona_persona *_persona) {
  freePersonaPersonaType(_persona);
}

/**
 * Reads a Persona from XML. The reader is assumed to be at the start element.
 *
 * @return the Persona, or NULL in case of error.
 */
static struct ifyouwannabecool_persona_persona *xmlTextReaderReadPersonaPersonaType(xmlTextReaderPtr reader) {
  int status, depth;
  void *_child_accessor;
  struct ifyouwannabecool_persona_persona *_persona = calloc(1, sizeof(struct ifyouwannabecool_persona_persona));



  if (xmlTextReaderIsEmptyElement(reader) == 0) {
    depth = xmlTextReaderDepth(reader);//track the depth.
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);

    while (xmlTextReaderDepth(reader) > depth) {
      if (status < 1) {
        //panic: XML read error.
#if DEBUG_ENUNCIATE
        printf("Failure to advance to next child element.\n");
#endif
        freePersonaPersonaType(_persona);
        free(_persona);
        return NULL;
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "id", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}id of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}id of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freePersonaPersonaType(_persona);
          free(_persona);
          return NULL;
        }

        _persona->id = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "email", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}email of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}email of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freePersonaPersonaType(_persona);
          free(_persona);
          return NULL;
        }

        _persona->email = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "alias", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}alias of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}alias of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freePersonaPersonaType(_persona);
          free(_persona);
          return NULL;
        }

        _persona->alias = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "name", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}name of type {http://api.ifyouwannabecool.com/persona}name.\n");
#endif
        _child_accessor = xmlTextReaderReadPersonaNameType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}name of type {http://api.ifyouwannabecool.com/persona}name.\n");
#endif
          //panic: unable to read the child element for some reason.
          freePersonaPersonaType(_persona);
          free(_persona);
          return NULL;
        }

        _persona->name = ((struct ifyouwannabecool_persona_name*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "picture", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read binary data of choice {}picture.\n");
#endif
        _child_accessor = xmlTextReaderReadEntireNodeValue(reader);
        _persona->picture = _decode_base64((xmlChar *) _child_accessor, &(_persona->_sizeof_picture));
        free(_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else {
#if DEBUG_ENUNCIATE > 1
        if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
          printf("unknown child element {}%s for type {http://api.ifyouwannabecool.com/persona}persona.  Skipping...\n",  xmlTextReaderConstLocalName(reader));
        }
        else {
          printf("unknown child element {%s}%s for type {http://api.ifyouwannabecool.com/persona}persona. Skipping...\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
        }
#endif
        status = xmlTextReaderSkipElement(reader);
      }
    }
  }

  return _persona;
}

/**
 * Writes a Persona to XML.
 *
 * @param writer The XML writer.
 * @param _persona The Persona to write.
 * @return The total bytes written, or -1 on error;
 */
static int xmlTextWriterWritePersonaPersonaType(xmlTextWriterPtr writer, struct ifyouwannabecool_persona_persona *_persona) {
  int status, totalBytes = 0, i;
  xmlChar *binaryData;
  if (_persona->id != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "id", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}id. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}id...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_persona->id));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}id. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}id. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_persona->email != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "email", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}email. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}email...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_persona->email));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}email. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}email. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_persona->alias != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "alias", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}alias. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}alias...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_persona->alias));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}alias. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}alias. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_persona->name != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "name", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}name. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://api.ifyouwannabecool.com/persona}name for element {}name...\n");
#endif
    status = xmlTextWriterWritePersonaNameType(writer, (_persona->name));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://api.ifyouwannabecool.com/persona}name for element {}name. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}name. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_persona->picture != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "picture", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}picture. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

#if DEBUG_ENUNCIATE > 1
    printf("writing binary data for element {}picture...\n");
#endif
    binaryData = _encode_base64(_persona->picture, _persona->_sizeof_picture);
    status = xmlTextWriterWriteString(writer, binaryData);
    free(binaryData);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write binary data for element {}picture. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}picture. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }

  return totalBytes;
}

/**
 * Frees the elements of a Persona.
 *
 * @param _persona The Persona to free.
 */
static void freePersonaPersonaType(struct ifyouwannabecool_persona_persona *_persona) {
  int i;
  if (_persona->id != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor id of type ifyouwannabecool_persona_persona...\n");
#endif
    freeXsStringType(_persona->id);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor id of type ifyouwannabecool_persona_persona...\n");
#endif
    free(_persona->id);
  }
  if (_persona->email != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor email of type ifyouwannabecool_persona_persona...\n");
#endif
    freeXsStringType(_persona->email);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor email of type ifyouwannabecool_persona_persona...\n");
#endif
    free(_persona->email);
  }
  if (_persona->alias != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor alias of type ifyouwannabecool_persona_persona...\n");
#endif
    freeXsStringType(_persona->alias);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor alias of type ifyouwannabecool_persona_persona...\n");
#endif
    free(_persona->alias);
  }
  if (_persona->name != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor name of type ifyouwannabecool_persona_persona...\n");
#endif
    freePersonaNameType(_persona->name);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor name of type ifyouwannabecool_persona_persona...\n");
#endif
    free(_persona->name);
  }
  if (_persona->picture != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor picture of type ifyouwannabecool_persona_persona...\n");
#endif
    free(_persona->picture);
  }
}
#endif /* DEF_ifyouwannabecool_persona_persona_M */
#ifndef DEF_ifyouwannabecool_link_socialGroup_M
#define DEF_ifyouwannabecool_link_socialGroup_M

/**
 * Reads a SocialGroup element from XML. The element to be read is "{http://api.ifyouwannabecool.com/link}socialGroup", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The SocialGroup, or NULL in case of error.
 */
struct ifyouwannabecool_link_socialGroup *xml_read_ifyouwannabecool_link_socialGroup(xmlTextReaderPtr reader) {
  int status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
  return xmlTextReaderReadLinkSocialGroupElement(reader);
}

/**
 * Writes a SocialGroup to XML under element name "{http://api.ifyouwannabecool.com/link}socialGroup".
 *
 * @param writer The XML writer.
 * @param _socialGroup The SocialGroup to write.
 * @return 1 if successful, 0 otherwise.
 */
int xml_write_ifyouwannabecool_link_socialGroup(xmlTextWriterPtr writer, struct ifyouwannabecool_link_socialGroup *_socialGroup) {
  return xmlTextWriterWriteLinkSocialGroupElementNS(writer, _socialGroup, 1);
}

/**
 * Frees a SocialGroup.
 *
 * @param _socialGroup The SocialGroup to free.
 */
void free_ifyouwannabecool_link_socialGroup(struct ifyouwannabecool_link_socialGroup *_socialGroup) {
  freeLinkSocialGroupType(_socialGroup);
  free(_socialGroup);
}

/**
 * Reads a SocialGroup element from XML. The element to be read is "{http://api.ifyouwannabecool.com/link}socialGroup", and
 * it is assumed that the reader is pointing to that element.
 *
 * @param reader The XML reader.
 * @return The SocialGroup, or NULL in case of error.
 */
struct ifyouwannabecool_link_socialGroup *xmlTextReaderReadLinkSocialGroupElement(xmlTextReaderPtr reader) {
  struct ifyouwannabecool_link_socialGroup *_socialGroup = NULL;

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "socialGroup", xmlTextReaderConstLocalName(reader)) == 0
    && xmlStrcmp(BAD_CAST "http://api.ifyouwannabecool.com/link", xmlTextReaderConstNamespaceUri(reader)) == 0) {
#if DEBUG_ENUNCIATE > 1
    printf("Attempting to read root element {http://api.ifyouwannabecool.com/link}socialGroup.\n");
#endif
    _socialGroup = xmlTextReaderReadLinkSocialGroupType(reader);
  }
#if DEBUG_ENUNCIATE
  if (_socialGroup == NULL) {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      printf("attempt to read {http://api.ifyouwannabecool.com/link}socialGroup failed. current element: {}%s\n",  xmlTextReaderConstLocalName(reader));
    }
    else {
      printf("attempt to read {http://api.ifyouwannabecool.com/link}socialGroup failed. current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
    }
  }
#endif

  return _socialGroup;
}

/**
 * Writes a SocialGroup to XML under element name "{http://api.ifyouwannabecool.com/link}socialGroup".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _socialGroup The SocialGroup to write.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteLinkSocialGroupElement(xmlTextWriterPtr writer, struct ifyouwannabecool_link_socialGroup *_socialGroup) {
  return xmlTextWriterWriteLinkSocialGroupElementNS(writer, _socialGroup, 0);
}

/**
 * Writes a SocialGroup to XML under element name "{http://api.ifyouwannabecool.com/link}socialGroup".
 *
 * @param writer The XML writer.
 * @param _socialGroup The SocialGroup to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteLinkSocialGroupElementNS(xmlTextWriterPtr writer, struct ifyouwannabecool_link_socialGroup *_socialGroup, int writeNamespaces) {
  int totalBytes = 0;
  int status;

  status = xmlTextWriterStartElementNS(writer, BAD_CAST "link", BAD_CAST "socialGroup", NULL);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write start element {http://api.ifyouwannabecool.com/link}socialGroup. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  if (writeNamespaces) {
#if DEBUG_ENUNCIATE > 1
    printf("writing namespaces for start element {http://api.ifyouwannabecool.com/link}socialGroup...\n");
#endif

    status = xmlTextWriterWriteAttribute(writer, BAD_CAST "xmlns:link", BAD_CAST "http://api.ifyouwannabecool.com/link");
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("unable to write namespace attribute xmlns:link. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }

#if DEBUG_ENUNCIATE > 1
  printf("writing type {http://api.ifyouwannabecool.com/link}socialGroup for root element {http://api.ifyouwannabecool.com/link}socialGroup...\n");
#endif
  status = xmlTextWriterWriteLinkSocialGroupType(writer, _socialGroup);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write type for start element {http://api.ifyouwannabecool.com/link}socialGroup. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  status = xmlTextWriterEndElement(writer);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to end element {http://api.ifyouwannabecool.com/link}socialGroup. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  return totalBytes;
}

/**
 * Frees the children of a SocialGroup.
 *
 * @param _socialGroup The SocialGroup whose children are to be free.
 */
static void freeLinkSocialGroupElement(struct ifyouwannabecool_link_socialGroup *_socialGroup) {
  freeLinkSocialGroupType(_socialGroup);
}

/**
 * Reads a SocialGroup from XML. The reader is assumed to be at the start element.
 *
 * @return the SocialGroup, or NULL in case of error.
 */
static struct ifyouwannabecool_link_socialGroup *xmlTextReaderReadLinkSocialGroupType(xmlTextReaderPtr reader) {
  int status, depth;
  void *_child_accessor;
  struct ifyouwannabecool_link_socialGroup *_socialGroup = calloc(1, sizeof(struct ifyouwannabecool_link_socialGroup));



  if (xmlTextReaderIsEmptyElement(reader) == 0) {
    depth = xmlTextReaderDepth(reader);//track the depth.
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);

    while (xmlTextReaderDepth(reader) > depth) {
      if (status < 1) {
        //panic: XML read error.
#if DEBUG_ENUNCIATE
        printf("Failure to advance to next child element.\n");
#endif
        freeLinkSocialGroupType(_socialGroup);
        free(_socialGroup);
        return NULL;
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "id", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}id of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}id of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeLinkSocialGroupType(_socialGroup);
          free(_socialGroup);
          return NULL;
        }

        _socialGroup->id = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "memberIds", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}memberIds of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}memberIds of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeLinkSocialGroupType(_socialGroup);
          free(_socialGroup);
          return NULL;
        }

        _socialGroup->memberIds = realloc(_socialGroup->memberIds, (_socialGroup->_sizeof_memberIds + 1) * sizeof(xmlChar));
        memcpy(&(_socialGroup->memberIds[_socialGroup->_sizeof_memberIds++]), _child_accessor, sizeof(xmlChar));
        free(_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "groupLeaderId", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}groupLeaderId of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}groupLeaderId of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeLinkSocialGroupType(_socialGroup);
          free(_socialGroup);
          return NULL;
        }

        _socialGroup->groupLeaderId = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "exclusive", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}exclusive of type {http://www.w3.org/2001/XMLSchema}boolean.\n");
#endif
        _child_accessor = xmlTextReaderReadXsBooleanType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}exclusive of type {http://www.w3.org/2001/XMLSchema}boolean.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeLinkSocialGroupType(_socialGroup);
          free(_socialGroup);
          return NULL;
        }

        _socialGroup->exclusive = *((int*)_child_accessor);
        free(_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else {
#if DEBUG_ENUNCIATE > 1
        if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
          printf("unknown child element {}%s for type {http://api.ifyouwannabecool.com/link}socialGroup.  Skipping...\n",  xmlTextReaderConstLocalName(reader));
        }
        else {
          printf("unknown child element {%s}%s for type {http://api.ifyouwannabecool.com/link}socialGroup. Skipping...\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
        }
#endif
        status = xmlTextReaderSkipElement(reader);
      }
    }
  }

  return _socialGroup;
}

/**
 * Writes a SocialGroup to XML.
 *
 * @param writer The XML writer.
 * @param _socialGroup The SocialGroup to write.
 * @return The total bytes written, or -1 on error;
 */
static int xmlTextWriterWriteLinkSocialGroupType(xmlTextWriterPtr writer, struct ifyouwannabecool_link_socialGroup *_socialGroup) {
  int status, totalBytes = 0, i;
  xmlChar *binaryData;
  if (_socialGroup->id != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "id", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}id. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}id...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_socialGroup->id));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}id. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}id. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  for (i = 0; i < _socialGroup->_sizeof_memberIds; i++) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "memberIds", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}memberIds. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}memberIds...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, &(_socialGroup->memberIds[i]));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}memberIds. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}memberIds. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_socialGroup->groupLeaderId != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "groupLeaderId", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}groupLeaderId. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}groupLeaderId...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_socialGroup->groupLeaderId));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}groupLeaderId. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}groupLeaderId. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (1) { //always write the primitive element.
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "exclusive", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}exclusive. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}boolean for element {}exclusive...\n");
#endif
    status = xmlTextWriterWriteXsBooleanType(writer, &(_socialGroup->exclusive));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}boolean for element {}exclusive. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}exclusive. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }

  return totalBytes;
}

/**
 * Frees the elements of a SocialGroup.
 *
 * @param _socialGroup The SocialGroup to free.
 */
static void freeLinkSocialGroupType(struct ifyouwannabecool_link_socialGroup *_socialGroup) {
  int i;
  if (_socialGroup->id != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor id of type ifyouwannabecool_link_socialGroup...\n");
#endif
    freeXsStringType(_socialGroup->id);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor id of type ifyouwannabecool_link_socialGroup...\n");
#endif
    free(_socialGroup->id);
  }
  if (_socialGroup->memberIds != NULL) {
    for (i = 0; i < _socialGroup->_sizeof_memberIds; i++) {
#if DEBUG_ENUNCIATE > 1
      printf("Freeing accessor memberIds[%i] of type ifyouwannabecool_link_socialGroup...\n", i);
#endif
      freeXsStringType(&(_socialGroup->memberIds[i]));
    }
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor memberIds of type ifyouwannabecool_link_socialGroup...\n");
#endif
    free(_socialGroup->memberIds);
  }
  if (_socialGroup->groupLeaderId != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor groupLeaderId of type ifyouwannabecool_link_socialGroup...\n");
#endif
    freeXsStringType(_socialGroup->groupLeaderId);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor groupLeaderId of type ifyouwannabecool_link_socialGroup...\n");
#endif
    free(_socialGroup->groupLeaderId);
  }
}
#endif /* DEF_ifyouwannabecool_link_socialGroup_M */
