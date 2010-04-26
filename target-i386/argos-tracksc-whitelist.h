#ifndef ARGOS_TRACKSC_WHITELIST_H
#define ARGOS_TRACKSC_WHITELIST_H

#define ARGOS_TRACKSC_DEFAULT_WHITELIST "/etc/argos-tracksc-whitelist"

typedef struct _argos_tracksc_whitelist_entry
{
    const char * module_name;
    slist_entry * functions;
} argos_tracksc_whitelist_entry;

slist_entry * argos_tracksc_read_whitelist(const char * whitelist_path);
argos_tracksc_whitelist_entry * argos_tracksc_find_module_in_whitelist(const char * module_name, slist_entry * whitelist);
int argos_tracksc_whitelist_function_in_whitelist_entry(const char * function_name, argos_tracksc_whitelist_entry * entry);

#endif
