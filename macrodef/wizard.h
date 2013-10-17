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

typedef struct __tag_backpack
{

}backpack;

typedef struct __tag_userinfo
{
    int             uid;                        //< 唯一id
    char            nickname[64];               //< 昵称
    int             designation;                //< 称号
    unsigned long   momery;                     //< 金币
    unsigned long   coupons;                    //< 点券
    int             strength;                   //< 体力

    wizard          wz[6];                      //< 6个精灵
    int             wztotal;                    //< 精灵总数
    int             where;                      //< 所在位置
    int             status;                     //< 状态：战斗或者别的

    int             viplevel;                   //< vip等级
    int             remaindays;                 //< vip剩余天数

    unsigned long   boolds;                     //< 血量
    int             victory;                    //< 胜利数
    int             lost;                       //< 失败数
    int             fightval;                   //< 战力值

    backpack        pack;                       //< 背包
}userinfo;

#endif // WIZARD_H_INCLUDED
