#pragma once

#include "Event.h"

namespace Hazel {
	class KeyEvent : public Event
	{
	public: 
		inline int GetKeyCode() { return m_KeyCode; }

		EVENT_CLASS_CATEGORY(EventCategoryKeyboard | EventCategoryInput)
	protected:
		KeyEvent(int keycode) : m_KeyCode(keycode) {}
		int m_KeyCode;
	};

	class KeyPressedEvent : public KeyEvent
	{
	public:
		KeyPressedEvent(int KeyCode, int RepeatCount)
			:m_KeyCode(KeyCode), m_RepeatCount(RepeatCount) {}

		inline int GetRepeatCount() { return m_RepeatCount; };

		std::string ToString() const override
		{
		std:stringstream ss;
			ss << "KeyPressedEvent: " << m_KeyCode << "(" << m_RepeatCount << " Repeats)";
			return ss.str();
		}

		EVENT_CLASS_TYPE(KeyPressed)
	private:
		int m_RepeatCount;
	};

	class KeyReleasedEvent : public KeyEvent
	{
	public:
		KeyPressedEvent(int KeyCode)
			:m_KeyCode(KeyCode) {}

		std::string ToString() const override
		{
		std:stringstream ss;
			ss << "KeyReleasedEvent: " << m_KeyCode;
			return ss.str();
		}

		EVENT_CLASS_TYPE(KeyReleased)
	};
}