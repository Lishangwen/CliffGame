xx={}

function xx.text()
end

local ui=slua.loadUI('/Game/Panel.Panel');
ui:AddToViewport(0);
local btn2=ui:FindWidget('Button1');

btn2.OnClicked:Add(function()
    print('Button 2 clicked!!!!')
end)

function BtnClicked()
    print('Button 2 clicked!!!!');
end

function update(dt,actor)
   
end
