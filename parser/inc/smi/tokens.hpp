#pragma once
#ifndef PCH
    #include <boost/spirit/home/x3/string/literal_string.hpp>
#endif

namespace smi::token
{
    namespace x3 = boost::spirit::x3;

    static const auto absent = x3::lit("ABSENT");
    static const auto access = x3::lit("ACCESS");
    static const auto agent_capabilities = x3::lit("AGENT-CAPABILITIES");
    static const auto any = x3::lit("ANY");
    static const auto application = x3::lit("APPLICATION");
    static const auto augments = x3::lit("AUGMENTS");
    static const auto begin = x3::lit("BEGIN");
    static const auto bit = x3::lit("BIT");
    static const auto bits = x3::lit("BITS");
    static const auto boolean = x3::lit("BOOLEAN");
    static const auto by = x3::lit("BY");
    static const auto choice = x3::lit("CHOICE");
    static const auto component = x3::lit("COMPONENT");
    static const auto components = x3::lit("COMPONENTS");
    static const auto contact_info = x3::lit("CONTACT-INFO");
    static const auto creation_requires = x3::lit("CREATION-REQUIRES");
    static const auto default_ = x3::lit("DEFAULT");
    static const auto defined = x3::lit("DEFINED");
    static const auto defined_as = x3::lit("::=");
    static const auto definitions = x3::lit("DEFINITIONS");
    static const auto defval = x3::lit("DEFVAL");
    static const auto description = x3::lit("DESCRIPTION");
    static const auto display_hint = x3::lit("DISPLAY-HINT");
    static const auto double_dot = x3::lit("..");
    static const auto end = x3::lit("END");
    static const auto enterprise = x3::lit("ENTERPRISE");
    static const auto enumerated = x3::lit("ENUMERATED");
    static const auto explicit_ = x3::lit("EXPLICIT");
    static const auto exports = x3::lit("EXPORTS");
    static const auto false_ = x3::lit("FALSE");
    static const auto from = x3::lit("FROM");
    static const auto group = x3::lit("GROUP");
    static const auto identifier = x3::lit("IDENTIFIER");
    static const auto implicit = x3::lit("IMPLICIT");
    static const auto implied = x3::lit("IMPLIED");
    static const auto imports = x3::lit("IMPORTS");
    static const auto includes = x3::lit("INCLUDES");
    static const auto index = x3::lit("INDEX");
    static const auto integer = x3::lit("INTEGER");
    static const auto last_updated = x3::lit("LAST-UPDATED");
    static const auto macro = x3::lit("MACRO");
    static const auto mandatory_groups = x3::lit("MANDATORY-GROUPS");
    static const auto max = x3::lit("MAX");
    static const auto max_access = x3::lit("MAX-ACCESS");
    static const auto min = x3::lit("MIN");
    static const auto min_access = x3::lit("MIN-ACCESS");
    static const auto minus_infinity = x3::lit("MINUS-INFINITY");
    static const auto module = x3::lit("MODULE");
    static const auto module_compliance = x3::lit("MODULE-COMPLIANCE");
    static const auto module_identity = x3::lit("MODULE-IDENTITY");
    static const auto notification_group = x3::lit("NOTIFICATION-GROUP");
    static const auto notification_type = x3::lit("NOTIFICATION-TYPE");
    static const auto notifications = x3::lit("NOTIFICATIONS");
    static const auto null = x3::lit("NULL");
    static const auto object = x3::lit("OBJECT");
    static const auto object_group = x3::lit("OBJECT-GROUP");
    static const auto object_identity = x3::lit("OBJECT-IDENTITY");
    static const auto object_type = x3::lit("OBJECT-TYPE");
    static const auto objects = x3::lit("OBJECTS");
    static const auto octet = x3::lit("OCTET");
    static const auto of = x3::lit("OF");
    static const auto optional = x3::lit("OPTIONAL");
    static const auto organization = x3::lit("ORGANIZATION");
    static const auto plus_infinity = x3::lit("PLUS-INFINITY");
    static const auto present = x3::lit("PRESENT");
    static const auto private_ = x3::lit("PRIVATE");
    static const auto product_release = x3::lit("PRODUCT-RELEASE");
    static const auto real = x3::lit("REAL");
    static const auto reference = x3::lit("REFERENCE");
    static const auto revision = x3::lit("REVISION");
    static const auto sequence = x3::lit("SEQUENCE");
    static const auto set = x3::lit("SET");
    static const auto size = x3::lit("SIZE");
    static const auto status = x3::lit("STATUS");
    static const auto string = x3::lit("STRING");
    static const auto supports = x3::lit("SUPPORTS");
    static const auto syntax = x3::lit("SYNTAX");
    static const auto tags = x3::lit("TAGS");
    static const auto textual_convention = x3::lit("TEXTUAL-CONVENTION");
    static const auto trap_type = x3::lit("TRAP-TYPE");
    static const auto triple_dot = x3::lit("...");
    static const auto true_ = x3::lit("TRUE");
    static const auto units = x3::lit("UNITS");
    static const auto universal = x3::lit("UNIVERSAL");
    static const auto variables = x3::lit("VARIABLES");
    static const auto variation = x3::lit("VARIATION");
    static const auto with = x3::lit("WITH");
    static const auto write_syntax = x3::lit("WRITE-SYNTAX");
}
