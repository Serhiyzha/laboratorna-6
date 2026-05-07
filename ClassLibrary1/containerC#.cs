using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ClassLibrary1
{
    public class containerC_ : Inter
    {
        private List<string> items = new List<string>();
        public void Addstring(string str)
        {
            items.Add(str);
        }

        public string FirstChars()
        {
            string result = "";
            for (int i = 0; i < items.Count; i++)
            {
                if (items[i].Length > 0)
                {
                    result += items[i][0];
                }
            }
            return result;
        }
        public string shortest()
        {
            if (items.Count == 0)
            {
                return "";
            }
            string shortest = items[0];
            for (int i = 1; i < items.Count; i++)
            {
                if (items[i].Length < shortest.Length)
                {
                    shortest = items[i];
                }
            }
            return shortest;
        }
        public double frequency(char c)
        {
            int total = 0;
            int count = 0;

            for (int i = 0; i < items.Count; i++)
            {
                string str = items[i];
                for (int j = 0; j < str.Length; j++)
                {
                    total++;
                    if (str[j] == c)
                    {
                        count++;
                    }
                }
            }
            if (total == 0)
            {
                return 0;
            }
            return (double)count / total;
        }
    }
}