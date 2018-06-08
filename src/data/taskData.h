#ifndef TASKDATA_H
#define TASKDATA_H
#include<string>
enum MGRTYPE{
    MGR_NUMBER,
    MGR_STDFF,
    MGR_GOOGS,
    MSG_CHECK,
    MGR_CONSUMPTION
};
enum TASKTYPE{
    TASK_TYPE_ADD_MEMBER=0,//添加会员
    TASK_TYPE_SEARCH_MEMBER,//查询会员
    TASK_TYPE_MODIFY_MEMBER,//编辑会员
    TASK_TYPE_DEL_MEMBER,//删除会员

    TASK_TYPE_ADD_STAFF,//添加员工
    TASK_TYPE_SEARCH_STAFF,//查询员工
    TASK_TYPE_MODIFY_STAFF,//编辑员工
    TASK_TYPE_DEL_STAFF,//删除员工

    TASK_TYPE_ADD_WORK_TYPE,//添加工种
    TASK_TYPE_SEARCH_WORK_TYPE,//查询工种
    TASK_TYPE_MODIFY_WORK_TYPE,//编辑工种
    TASK_TYPE_DEL_WORK_TYPE,//删除工种

    TASK_TYPE_ADD_GOODS,//添加商品
    TASK_TYPE_SEARCH_GOODS,//查询商品
    TASK_TYPE_MODIFY_GOODS,//编辑商品
    TASK_TYPE_DEL_GOODS,//删除商品

    TASK_TYPE_VIP_CHECK,//会员结账
    TASK_TYPE_NOTVIP_CHECK,//非会员结账

    TASK_TYPE_VIP_CONSUMPTION,//会员消费查询
    TASK_TYPE_ALL_CONSUMPTION//所有消费查询
};

struct taskInfo{
    TASKTYPE id;
    std::string name;
};

#endif//TASKDATA_H
