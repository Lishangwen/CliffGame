-- 游戏场景内UI
InGamePanel= InGamePanel or
{
    bloodValue=0  --血量
};

local ui=slua.loadUI('/Game/Blueprints/UMG/InGamePanel.InGamePanel');
ui:AddToViewport(0);

local textBlood=ui:FindWidget('TextBlood');
local addBloodBtn=ui:FindWidget('AddBloodBtn');
textBlood:SetText(InGamePanel.bloodValue);

-- 加血按钮点击事件
function InGamePanel.OnAddBloodBtnClick()
    InGamePanel.bloodValue=InGamePanel.bloodValue+10;
    if InGamePanel.bloodValue>200 then
        InGamePanel.bloodValue=200;
    end
    textBlood:SetText(InGamePanel.bloodValue);
end

addBloodBtn.OnClicked:Add(InGamePanel.OnAddBloodBtnClick);

function update(dt,actor)
   
end
