TestUI= TestUI or
{

}

function TestUI.text()
end

local ui=slua.loadUI('/Game/UMG/Panel.Panel');
ui:AddToViewport(0);
local btn2=ui:FindWidget('Button1');

function TestUI.AA()
    print('Button 2 clicked!!!!');
    --ui:RemoveFromParent();
end

btn2.OnClicked:Add(TestUI.AA);           -- 绑定方式1：函数绑定，但是函数需要先定义再绑定

--[[
btn2.OnClicked:Add(function ()            -- 绑定方式2：闭包函数绑定
    print('Button 1 clicked!!!!');
end)
]]
function update(dt,actor)
   
end
