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
    int             number;
    char            wizard_name[64];

    int             attack;
    int             defense;                //< 防御
    int             speed;
    int             magic;
    int             blood;

    int             reduce;                 //< 伤害减免
    int             damage;                 //< 附加伤害
    short           cirt;                   //< 暴击
    short           dodge;                  //< 躲闪

    char            level;
    char            sexy;
    char            property;
    char            charactor;              //< 性格

    short           strengthening;          //< 强化
    short           potential;              //< 潜力
    char            evolutionary_level;     //< 进化等级
    char            intimacy;               //< 亲密度
    wizard_status   status[5];              //< 状态

}wizard;

typedef struct __tag_userinfo
{
    int         uid;
    char        nickname[64];


}userinfo;

#endif // WIZARD_H_INCLUDED
