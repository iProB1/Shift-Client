#include "main.h"
#include <iostream>
#include <fstream>
#include <windows.h>
#include "imgui/TextEditor.h" // there text editor you can use it for executor

void Tab::Main(){
		ImGuiTabBarFlags tbflags = ImGuiTabBarFlags_None;
		if (ImGui::BeginTabBar("MyTabBar", tbflags))
		{
			if (ImGui::BeginTabItem("Cheats"))
			{
				ImGui::Text("its base of Shift client\nMade By ProB1#0100");
				ImGui::EndTabItem();
			}
			ImGui::EndTabBar();
		}
}
void Tab::Another() {
   // add another menus thats why here
}
