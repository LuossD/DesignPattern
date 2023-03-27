//
// Created by hg on 3/27/23.
//

#ifndef DP_ADAPTER_H
#define DP_ADAPTER_H

//目标接口类，客户需要的接口
class Target
{
public:
     virtual ~Target() = default;
     virtual void Request() = 0; ///定义标准接口
};

//需要适配的类
class Adaptee
{
public:
     Adaptee() = default;
     ~Adaptee() = default;
     void SpecificRequest();
};

//类模式，适配器类，通过public继承获得接口继承的效果，通过private继承获得实现继承的效果
class Adapter : public Target, private Adaptee
{
public:
     Adapter() = default;
     ~Adapter() = default;
     void Request() override; ///实现Target定义的Request接口
};

//对象模式，适配器类，继承Target类，采用组合的方式实现Adaptee的复用
class Adapter1 : public Target
{
public:
     Adapter1(Adaptee* adaptee);
     Adapter1();
     ~Adapter1();
     void Request() override; ///实现Target定义的Request接口
private:
     Adaptee* adaptee_;
};

#endif //DP_ADAPTER_H
