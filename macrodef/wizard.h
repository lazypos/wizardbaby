#ifndef WIZARD_H_INCLUDED
#define WIZARD_H_INCLUDED

#define STATUS_NAME                 0x10000000
#define STATUS_PARALYSIS            (STATUS_NAME|0x1)       //< 麻痹
#define STATUS_DIZZINESS            (STATUS_NAME|0X2)       //< 眩晕
#define STATUS_POISONING            (STATUS_NAME|0X3)       //< 中毒
#define STATUS_FREEZE               (STATUS_NAME|0X4)       //< 冰冻
#define STATUS_DEFENSE              (STATUS_NAME|0X5)       //< 防御

typedef struct __tag_wizard_status
{
    int     status_name;        //< status name
    int     status_stage;       //< status stage

}wizard_status;

#endif // WIZARD_H_INCLUDED
