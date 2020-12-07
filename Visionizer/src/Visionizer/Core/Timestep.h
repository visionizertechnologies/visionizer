#pragma once

namespace Visionizer
{
	class Timestep
	{
	public:
		Timestep(float time = 0.0)
			: m_Time(time)
		{
		}

		operator float() const { return m_Time; }

		float GetSeconds() const { return m_Time; }
		float GetMilliseconds() const { return m_Time * 1000.0f; }

		// [TODO] Add more mathematical functions
	private:
		float m_Time;
	};
}