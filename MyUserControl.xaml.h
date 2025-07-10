//
// MyUserControl.xaml.h
// Declaration of the MyUserControl class
//

#pragma once

#include "MyUserControl.g.h"

namespace coros
{
	[Windows::Foundation::Metadata::WebHostHidden]
	public ref class MyUserControl sealed
	{
	public:
		MyUserControl();
	private:
		void Button_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
	};
}
