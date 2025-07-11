//
// MyUserControl.xaml.h
// Declaration of the MyUserControl class
//

#pragma once

#include "Files.g.h"

namespace coros
{
	[Windows::Foundation::Metadata::WebHostHidden]
	public ref class Files sealed
	{
	public:
		Files();
	private:
		void Button_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
		void Architecture_Loaded(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
		void Architecture_Loaded_1(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
	};
}
