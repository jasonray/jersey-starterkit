#include <enunciate-common.c>
#ifndef DEF_enunciate_ns0_socialGroup_H
#define DEF_enunciate_ns0_socialGroup_H

/**
 *  @author Ryan Heaton

 */
struct enunciate_ns0_socialGroup {


  /**
   * (no documentation provided)
   */
  xmlChar *id;

  /**
   * (no documentation provided)
   */
  xmlChar *memberIds;

  /**
   * Size of the memberIds array.
   */
  int _sizeof_memberIds;

  /**
   * (no documentation provided)
   */
  xmlChar *groupLeaderId;

  /**
   * (no documentation provided)
   */
  int exclusive;
};

/**
 * Reads a SocialGroup element from XML. The element to be read is "socialGroup", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The SocialGroup, or NULL in case of error.
 */
struct enunciate_ns0_socialGroup *xml_read_enunciate_ns0_socialGroup(xmlTextReaderPtr reader);

/**
 * Writes a SocialGroup to XML under element name "socialGroup".
 *
 * @param writer The XML writer.
 * @param _socialGroup The SocialGroup to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
int xml_write_enunciate_ns0_socialGroup(xmlTextWriterPtr writer, struct enunciate_ns0_socialGroup *_socialGroup);

/**
 * Frees a SocialGroup.
 *
 * @param _socialGroup The SocialGroup to free.
 */
void free_enunciate_ns0_socialGroup(struct enunciate_ns0_socialGroup *_socialGroup);

/**
 * Reads a SocialGroup element from XML. The element to be read is "socialGroup", and
 * it is assumed that the reader is already pointing to the element.
 *
 * @param reader The XML reader.
 * @return The SocialGroup, or NULL in case of error.
 */
struct enunciate_ns0_socialGroup *xmlTextReaderReadNs0SocialGroupElement(xmlTextReaderPtr reader);

/**
 * Writes a SocialGroup to XML under element name "socialGroup".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _socialGroup The SocialGroup to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0SocialGroupElement(xmlTextWriterPtr writer, struct enunciate_ns0_socialGroup *_socialGroup);

/**
 * Writes a SocialGroup to XML under element name "socialGroup".
 *
 * @param writer The XML writer.
 * @param _socialGroup The SocialGroup to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0SocialGroupElementNS(xmlTextWriterPtr writer, struct enunciate_ns0_socialGroup *_socialGroup, int writeNamespaces);

/**
 * Frees the children of a SocialGroup.
 *
 * @param _socialGroup The SocialGroup whose children are to be free.
 */
static void freeNs0SocialGroupElement(struct enunciate_ns0_socialGroup *_socialGroup);

/**
 * Reads a SocialGroup from XML. The reader is assumed to be at the start element.
 *
 * @param reader The XML reader.
 * @return The SocialGroup, or NULL in case of error.
 */
static struct enunciate_ns0_socialGroup *xmlTextReaderReadNs0SocialGroupType(xmlTextReaderPtr reader);

/**
 * Writes a SocialGroup to XML.
 *
 * @param writer The XML writer.
 * @param _socialGroup The SocialGroup to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0SocialGroupType(xmlTextWriterPtr writer, struct enunciate_ns0_socialGroup *_socialGroup);

/**
 * Frees the elements of a SocialGroup.
 *
 * @param _socialGroup The SocialGroup to free.
 */
static void freeNs0SocialGroupType(struct enunciate_ns0_socialGroup *_socialGroup);

#endif /* DEF_enunciate_ns0_socialGroup_H */
#ifndef DEF_enunciate_ns0_name_H
#define DEF_enunciate_ns0_name_H

/**
 *  @author Ryan Heaton

 */
struct enunciate_ns0_name {


  /**
   * (no documentation provided)
   */
  xmlChar *givenName;

  /**
   * (no documentation provided)
   */
  xmlChar *surname;
};

/**
 * Reads a Name from XML. The reader is assumed to be at the start element.
 *
 * @param reader The XML reader.
 * @return The Name, or NULL in case of error.
 */
static struct enunciate_ns0_name *xmlTextReaderReadNs0NameType(xmlTextReaderPtr reader);

/**
 * Writes a Name to XML.
 *
 * @param writer The XML writer.
 * @param _name The Name to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0NameType(xmlTextWriterPtr writer, struct enunciate_ns0_name *_name);

/**
 * Frees the elements of a Name.
 *
 * @param _name The Name to free.
 */
static void freeNs0NameType(struct enunciate_ns0_name *_name);

#endif /* DEF_enunciate_ns0_name_H */
#ifndef DEF_enunciate_ns0_persona_H
#define DEF_enunciate_ns0_persona_H

/**
 *  @author Ryan Heaton

 */
struct enunciate_ns0_persona {


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
  xmlChar *groups;

  /**
   * Size of the groups array.
   */
  int _sizeof_groups;

  /**
   * (no documentation provided)
   */
  struct enunciate_ns0_name *name;

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
 * Reads a Persona element from XML. The element to be read is "persona", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The Persona, or NULL in case of error.
 */
struct enunciate_ns0_persona *xml_read_enunciate_ns0_persona(xmlTextReaderPtr reader);

/**
 * Writes a Persona to XML under element name "persona".
 *
 * @param writer The XML writer.
 * @param _persona The Persona to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
int xml_write_enunciate_ns0_persona(xmlTextWriterPtr writer, struct enunciate_ns0_persona *_persona);

/**
 * Frees a Persona.
 *
 * @param _persona The Persona to free.
 */
void free_enunciate_ns0_persona(struct enunciate_ns0_persona *_persona);

/**
 * Reads a Persona element from XML. The element to be read is "persona", and
 * it is assumed that the reader is already pointing to the element.
 *
 * @param reader The XML reader.
 * @return The Persona, or NULL in case of error.
 */
struct enunciate_ns0_persona *xmlTextReaderReadNs0PersonaElement(xmlTextReaderPtr reader);

/**
 * Writes a Persona to XML under element name "persona".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _persona The Persona to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0PersonaElement(xmlTextWriterPtr writer, struct enunciate_ns0_persona *_persona);

/**
 * Writes a Persona to XML under element name "persona".
 *
 * @param writer The XML writer.
 * @param _persona The Persona to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0PersonaElementNS(xmlTextWriterPtr writer, struct enunciate_ns0_persona *_persona, int writeNamespaces);

/**
 * Frees the children of a Persona.
 *
 * @param _persona The Persona whose children are to be free.
 */
static void freeNs0PersonaElement(struct enunciate_ns0_persona *_persona);

/**
 * Reads a Persona from XML. The reader is assumed to be at the start element.
 *
 * @param reader The XML reader.
 * @return The Persona, or NULL in case of error.
 */
static struct enunciate_ns0_persona *xmlTextReaderReadNs0PersonaType(xmlTextReaderPtr reader);

/**
 * Writes a Persona to XML.
 *
 * @param writer The XML writer.
 * @param _persona The Persona to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0PersonaType(xmlTextWriterPtr writer, struct enunciate_ns0_persona *_persona);

/**
 * Frees the elements of a Persona.
 *
 * @param _persona The Persona to free.
 */
static void freeNs0PersonaType(struct enunciate_ns0_persona *_persona);

#endif /* DEF_enunciate_ns0_persona_H */
#ifndef DEF_enunciate_ns0_socialGroup_M
#define DEF_enunciate_ns0_socialGroup_M

/**
 * Reads a SocialGroup element from XML. The element to be read is "socialGroup", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The SocialGroup, or NULL in case of error.
 */
struct enunciate_ns0_socialGroup *xml_read_enunciate_ns0_socialGroup(xmlTextReaderPtr reader) {
  int status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
  return xmlTextReaderReadNs0SocialGroupElement(reader);
}

/**
 * Writes a SocialGroup to XML under element name "socialGroup".
 *
 * @param writer The XML writer.
 * @param _socialGroup The SocialGroup to write.
 * @return 1 if successful, 0 otherwise.
 */
int xml_write_enunciate_ns0_socialGroup(xmlTextWriterPtr writer, struct enunciate_ns0_socialGroup *_socialGroup) {
  return xmlTextWriterWriteNs0SocialGroupElementNS(writer, _socialGroup, 1);
}

/**
 * Frees a SocialGroup.
 *
 * @param _socialGroup The SocialGroup to free.
 */
void free_enunciate_ns0_socialGroup(struct enunciate_ns0_socialGroup *_socialGroup) {
  freeNs0SocialGroupType(_socialGroup);
  free(_socialGroup);
}

/**
 * Reads a SocialGroup element from XML. The element to be read is "socialGroup", and
 * it is assumed that the reader is pointing to that element.
 *
 * @param reader The XML reader.
 * @return The SocialGroup, or NULL in case of error.
 */
struct enunciate_ns0_socialGroup *xmlTextReaderReadNs0SocialGroupElement(xmlTextReaderPtr reader) {
  struct enunciate_ns0_socialGroup *_socialGroup = NULL;

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "socialGroup", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Attempting to read root element {}socialGroup.\n");
#endif
    _socialGroup = xmlTextReaderReadNs0SocialGroupType(reader);
  }
#if DEBUG_ENUNCIATE
  if (_socialGroup == NULL) {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      printf("attempt to read {}socialGroup failed. current element: {}%s\n",  xmlTextReaderConstLocalName(reader));
    }
    else {
      printf("attempt to read {}socialGroup failed. current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
    }
  }
#endif

  return _socialGroup;
}

/**
 * Writes a SocialGroup to XML under element name "socialGroup".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _socialGroup The SocialGroup to write.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0SocialGroupElement(xmlTextWriterPtr writer, struct enunciate_ns0_socialGroup *_socialGroup) {
  return xmlTextWriterWriteNs0SocialGroupElementNS(writer, _socialGroup, 0);
}

/**
 * Writes a SocialGroup to XML under element name "socialGroup".
 *
 * @param writer The XML writer.
 * @param _socialGroup The SocialGroup to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0SocialGroupElementNS(xmlTextWriterPtr writer, struct enunciate_ns0_socialGroup *_socialGroup, int writeNamespaces) {
  int totalBytes = 0;
  int status;

  status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "socialGroup", NULL);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write start element {}socialGroup. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

#if DEBUG_ENUNCIATE > 1
  printf("writing type {}socialGroup for root element {}socialGroup...\n");
#endif
  status = xmlTextWriterWriteNs0SocialGroupType(writer, _socialGroup);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write type for start element {}socialGroup. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  status = xmlTextWriterEndElement(writer);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to end element {}socialGroup. status: %i\n", status);
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
static void freeNs0SocialGroupElement(struct enunciate_ns0_socialGroup *_socialGroup) {
  freeNs0SocialGroupType(_socialGroup);
}

/**
 * Reads a SocialGroup from XML. The reader is assumed to be at the start element.
 *
 * @return the SocialGroup, or NULL in case of error.
 */
static struct enunciate_ns0_socialGroup *xmlTextReaderReadNs0SocialGroupType(xmlTextReaderPtr reader) {
  int status, depth;
  void *_child_accessor;
  struct enunciate_ns0_socialGroup *_socialGroup = calloc(1, sizeof(struct enunciate_ns0_socialGroup));



  if (xmlTextReaderIsEmptyElement(reader) == 0) {
    depth = xmlTextReaderDepth(reader);//track the depth.
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);

    while (xmlTextReaderDepth(reader) > depth) {
      if (status < 1) {
        //panic: XML read error.
#if DEBUG_ENUNCIATE
        printf("Failure to advance to next child element.\n");
#endif
        freeNs0SocialGroupType(_socialGroup);
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
          freeNs0SocialGroupType(_socialGroup);
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
          freeNs0SocialGroupType(_socialGroup);
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
          freeNs0SocialGroupType(_socialGroup);
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
          freeNs0SocialGroupType(_socialGroup);
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
          printf("unknown child element {}%s for type {}socialGroup.  Skipping...\n",  xmlTextReaderConstLocalName(reader));
        }
        else {
          printf("unknown child element {%s}%s for type {}socialGroup. Skipping...\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
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
static int xmlTextWriterWriteNs0SocialGroupType(xmlTextWriterPtr writer, struct enunciate_ns0_socialGroup *_socialGroup) {
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
static void freeNs0SocialGroupType(struct enunciate_ns0_socialGroup *_socialGroup) {
  int i;
  if (_socialGroup->id != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor id of type enunciate_ns0_socialGroup...\n");
#endif
    freeXsStringType(_socialGroup->id);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor id of type enunciate_ns0_socialGroup...\n");
#endif
    free(_socialGroup->id);
  }
  if (_socialGroup->memberIds != NULL) {
    for (i = 0; i < _socialGroup->_sizeof_memberIds; i++) {
#if DEBUG_ENUNCIATE > 1
      printf("Freeing accessor memberIds[%i] of type enunciate_ns0_socialGroup...\n", i);
#endif
      freeXsStringType(&(_socialGroup->memberIds[i]));
    }
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor memberIds of type enunciate_ns0_socialGroup...\n");
#endif
    free(_socialGroup->memberIds);
  }
  if (_socialGroup->groupLeaderId != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor groupLeaderId of type enunciate_ns0_socialGroup...\n");
#endif
    freeXsStringType(_socialGroup->groupLeaderId);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor groupLeaderId of type enunciate_ns0_socialGroup...\n");
#endif
    free(_socialGroup->groupLeaderId);
  }
}
#endif /* DEF_enunciate_ns0_socialGroup_M */
#ifndef DEF_enunciate_ns0_name_M
#define DEF_enunciate_ns0_name_M

/**
 * Reads a Name from XML. The reader is assumed to be at the start element.
 *
 * @return the Name, or NULL in case of error.
 */
static struct enunciate_ns0_name *xmlTextReaderReadNs0NameType(xmlTextReaderPtr reader) {
  int status, depth;
  void *_child_accessor;
  struct enunciate_ns0_name *_name = calloc(1, sizeof(struct enunciate_ns0_name));



  if (xmlTextReaderIsEmptyElement(reader) == 0) {
    depth = xmlTextReaderDepth(reader);//track the depth.
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);

    while (xmlTextReaderDepth(reader) > depth) {
      if (status < 1) {
        //panic: XML read error.
#if DEBUG_ENUNCIATE
        printf("Failure to advance to next child element.\n");
#endif
        freeNs0NameType(_name);
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
          freeNs0NameType(_name);
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
          freeNs0NameType(_name);
          free(_name);
          return NULL;
        }

        _name->surname = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else {
#if DEBUG_ENUNCIATE > 1
        if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
          printf("unknown child element {}%s for type {}name.  Skipping...\n",  xmlTextReaderConstLocalName(reader));
        }
        else {
          printf("unknown child element {%s}%s for type {}name. Skipping...\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
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
static int xmlTextWriterWriteNs0NameType(xmlTextWriterPtr writer, struct enunciate_ns0_name *_name) {
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
static void freeNs0NameType(struct enunciate_ns0_name *_name) {
  int i;
  if (_name->givenName != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor givenName of type enunciate_ns0_name...\n");
#endif
    freeXsStringType(_name->givenName);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor givenName of type enunciate_ns0_name...\n");
#endif
    free(_name->givenName);
  }
  if (_name->surname != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor surname of type enunciate_ns0_name...\n");
#endif
    freeXsStringType(_name->surname);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor surname of type enunciate_ns0_name...\n");
#endif
    free(_name->surname);
  }
}
#endif /* DEF_enunciate_ns0_name_M */
#ifndef DEF_enunciate_ns0_persona_M
#define DEF_enunciate_ns0_persona_M

/**
 * Reads a Persona element from XML. The element to be read is "persona", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The Persona, or NULL in case of error.
 */
struct enunciate_ns0_persona *xml_read_enunciate_ns0_persona(xmlTextReaderPtr reader) {
  int status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
  return xmlTextReaderReadNs0PersonaElement(reader);
}

/**
 * Writes a Persona to XML under element name "persona".
 *
 * @param writer The XML writer.
 * @param _persona The Persona to write.
 * @return 1 if successful, 0 otherwise.
 */
int xml_write_enunciate_ns0_persona(xmlTextWriterPtr writer, struct enunciate_ns0_persona *_persona) {
  return xmlTextWriterWriteNs0PersonaElementNS(writer, _persona, 1);
}

/**
 * Frees a Persona.
 *
 * @param _persona The Persona to free.
 */
void free_enunciate_ns0_persona(struct enunciate_ns0_persona *_persona) {
  freeNs0PersonaType(_persona);
  free(_persona);
}

/**
 * Reads a Persona element from XML. The element to be read is "persona", and
 * it is assumed that the reader is pointing to that element.
 *
 * @param reader The XML reader.
 * @return The Persona, or NULL in case of error.
 */
struct enunciate_ns0_persona *xmlTextReaderReadNs0PersonaElement(xmlTextReaderPtr reader) {
  struct enunciate_ns0_persona *_persona = NULL;

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "persona", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Attempting to read root element {}persona.\n");
#endif
    _persona = xmlTextReaderReadNs0PersonaType(reader);
  }
#if DEBUG_ENUNCIATE
  if (_persona == NULL) {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      printf("attempt to read {}persona failed. current element: {}%s\n",  xmlTextReaderConstLocalName(reader));
    }
    else {
      printf("attempt to read {}persona failed. current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
    }
  }
#endif

  return _persona;
}

/**
 * Writes a Persona to XML under element name "persona".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _persona The Persona to write.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0PersonaElement(xmlTextWriterPtr writer, struct enunciate_ns0_persona *_persona) {
  return xmlTextWriterWriteNs0PersonaElementNS(writer, _persona, 0);
}

/**
 * Writes a Persona to XML under element name "persona".
 *
 * @param writer The XML writer.
 * @param _persona The Persona to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0PersonaElementNS(xmlTextWriterPtr writer, struct enunciate_ns0_persona *_persona, int writeNamespaces) {
  int totalBytes = 0;
  int status;

  status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "persona", NULL);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write start element {}persona. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

#if DEBUG_ENUNCIATE > 1
  printf("writing type {}persona for root element {}persona...\n");
#endif
  status = xmlTextWriterWriteNs0PersonaType(writer, _persona);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write type for start element {}persona. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  status = xmlTextWriterEndElement(writer);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to end element {}persona. status: %i\n", status);
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
static void freeNs0PersonaElement(struct enunciate_ns0_persona *_persona) {
  freeNs0PersonaType(_persona);
}

/**
 * Reads a Persona from XML. The reader is assumed to be at the start element.
 *
 * @return the Persona, or NULL in case of error.
 */
static struct enunciate_ns0_persona *xmlTextReaderReadNs0PersonaType(xmlTextReaderPtr reader) {
  int status, depth;
  void *_child_accessor;
  struct enunciate_ns0_persona *_persona = calloc(1, sizeof(struct enunciate_ns0_persona));



  if (xmlTextReaderIsEmptyElement(reader) == 0) {
    depth = xmlTextReaderDepth(reader);//track the depth.
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);

    while (xmlTextReaderDepth(reader) > depth) {
      if (status < 1) {
        //panic: XML read error.
#if DEBUG_ENUNCIATE
        printf("Failure to advance to next child element.\n");
#endif
        freeNs0PersonaType(_persona);
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
          freeNs0PersonaType(_persona);
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
          freeNs0PersonaType(_persona);
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
          freeNs0PersonaType(_persona);
          free(_persona);
          return NULL;
        }

        _persona->alias = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "groups", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}groups of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}groups of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0PersonaType(_persona);
          free(_persona);
          return NULL;
        }

        _persona->groups = realloc(_persona->groups, (_persona->_sizeof_groups + 1) * sizeof(xmlChar));
        memcpy(&(_persona->groups[_persona->_sizeof_groups++]), _child_accessor, sizeof(xmlChar));
        free(_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "name", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}name of type {}name.\n");
#endif
        _child_accessor = xmlTextReaderReadNs0NameType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}name of type {}name.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0PersonaType(_persona);
          free(_persona);
          return NULL;
        }

        _persona->name = ((struct enunciate_ns0_name*)_child_accessor);
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
          printf("unknown child element {}%s for type {}persona.  Skipping...\n",  xmlTextReaderConstLocalName(reader));
        }
        else {
          printf("unknown child element {%s}%s for type {}persona. Skipping...\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
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
static int xmlTextWriterWriteNs0PersonaType(xmlTextWriterPtr writer, struct enunciate_ns0_persona *_persona) {
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
  for (i = 0; i < _persona->_sizeof_groups; i++) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "groups", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}groups. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}groups...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, &(_persona->groups[i]));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}groups. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}groups. status: %i\n", status);
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
    printf("writing type {}name for element {}name...\n");
#endif
    status = xmlTextWriterWriteNs0NameType(writer, (_persona->name));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {}name for element {}name. status: %i\n", status);
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
static void freeNs0PersonaType(struct enunciate_ns0_persona *_persona) {
  int i;
  if (_persona->id != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor id of type enunciate_ns0_persona...\n");
#endif
    freeXsStringType(_persona->id);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor id of type enunciate_ns0_persona...\n");
#endif
    free(_persona->id);
  }
  if (_persona->email != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor email of type enunciate_ns0_persona...\n");
#endif
    freeXsStringType(_persona->email);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor email of type enunciate_ns0_persona...\n");
#endif
    free(_persona->email);
  }
  if (_persona->alias != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor alias of type enunciate_ns0_persona...\n");
#endif
    freeXsStringType(_persona->alias);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor alias of type enunciate_ns0_persona...\n");
#endif
    free(_persona->alias);
  }
  if (_persona->groups != NULL) {
    for (i = 0; i < _persona->_sizeof_groups; i++) {
#if DEBUG_ENUNCIATE > 1
      printf("Freeing accessor groups[%i] of type enunciate_ns0_persona...\n", i);
#endif
      freeXsStringType(&(_persona->groups[i]));
    }
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor groups of type enunciate_ns0_persona...\n");
#endif
    free(_persona->groups);
  }
  if (_persona->name != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor name of type enunciate_ns0_persona...\n");
#endif
    freeNs0NameType(_persona->name);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor name of type enunciate_ns0_persona...\n");
#endif
    free(_persona->name);
  }
  if (_persona->picture != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor picture of type enunciate_ns0_persona...\n");
#endif
    free(_persona->picture);
  }
}
#endif /* DEF_enunciate_ns0_persona_M */
