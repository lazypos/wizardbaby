#ifndef WIZARD_H_INCLUDED
#define WIZARD_H_INCLUDED
#include "macro.h"


typedef struct __tag_wizard_status
{
    int     status_name;                //< status name
    int     status_remaining;           //< 剩余状态

}wizard_status;

typedef struct __tag_wizard
{
    char            wizard_name[64];
    int             level;

    wizard_status   self_sta[3];              //<
    wizard_status   other_sta[3];


}wizard;

#endif // WIZARD_H_INCLUDED
