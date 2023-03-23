// https://github.com/statianzo/Fleck

// The MIT License

// Copyright (c) 2010-2016 Jason Staten

// Permission is hereby granted, free of charge, to any person obtaining a copy of
// this software and associated documentation files (the "Software"), to deal in
// the Software without restriction, including without limitation the rights to
// use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of
// the Software, and to permit persons to whom the Software is furnished to do so,
// subject to the following conditions:

// The above copyright notice and this permission notice shall be included in all
// copies or substantial portions of the Software.

// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS
// FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR
// COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER
// IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
// CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.

using System.Collections.Generic;
using System;

namespace Fleck
{
    public class WebSocketHttpRequest
    {
        private readonly IDictionary<string, string> _headers = new Dictionary<string, string>(System.StringComparer.InvariantCultureIgnoreCase);

        public string Method { get; set; }

        public string Path { get; set; }

        public string Body { get; set; }

        public string Scheme { get; set; }

        public byte[] Bytes { get; set; }

        public string this[string name]
        {
            get
            {
                string value;
                return _headers.TryGetValue(name, out value) ? value : default(string);
            }
        }

        public IDictionary<string, string> Headers
        {
            get
            {
                return _headers;
            }
        }
        
        public string[] SubProtocols {
          get
          {
            string value;
          return _headers.TryGetValue("Sec-WebSocket-Protocol", out value)
              ? value.Split(new []{',', ' '}, StringSplitOptions.RemoveEmptyEntries)
              : new string[0];
          }
        }
    }
}

