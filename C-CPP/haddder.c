\input{setup/preamble.tex}
\input{setup/macros.tex}

\begin{document}
    %%% Sections %%%
    \vspace*{-1em}
    \tcbset{colframe=white,colback=white,arc=0mm, height=0.75\textheight}
    \begin{tcolorbox}
        %\vspace*{-0.5em}      
         \adjustbox{valign=t}{\begin{minipage}{0.3\textwidth} % Side Panel 
            \begin{tcolorbox}[height=0.95\textheight, grow to left by=0.6cm, colback=backdrop,colframe=backdrop,arc=0mm]
                %\begin{minipage}{\textwidth} % Picture Area
                \includegraphics[width=\textwidth]{profile.png} % Picture 
                \vspace{1em}

             
                
                \email{trivediarun446@gmail.com} 
                \vspace{0.7em}

                \phone{+91 8542086378} %\par 
                \vspace{0.7em}
                %\vspace{0.7em}
                
                \address{Uttar pradesh/India} \par \vspace{0.7em}
                \linkedin{https://www.linkedin.com/in/aruntrivedi446 }{aruntrivedi446} \par \vspace{0.7em}

                \github{https://https://github.com/trivediarun446}{trivediarun446} \par \vspace{0.7em}

                \vspace{1.3em}
                \parbox{0.35\linewidth}{English Mandarin German French}
                \parbox{0.55\linewidth}{Native
                
                Native
                
                B2
                
                A2}
              \section*{About Me}
                    \AboutMe{B Tech in Computer Science}{ 2023 -  2027}{Pranveer Institute Of Technology, Kanpur} \vspace{0.5em}{Marks .} \vspace{0.5em}
            \end{tcolorbox}
        \end{minipage}}
               %%% TItle %%%
        %\tcbset{colframe=title,colback=title,arc=0mm}
        \adjustbox{valign=t}{\begin{minipage}{0.67\textwidth} % Main Panel (e.g. Education, Work Experience)
            \begin{tcolorbox}[grow to right by=0.75cm,height=0.08\textheight, colframe=title,colback=title,arc=0mm]
                \name{Arun Trivedi}{\textit{Computer Science Engineer    }} % Name and Profession % Name and Profession
                %\vspace{0.5em}
            \end{tcolorbox}
        %\end{minipage}
        %\begin{minipage}[b]{0.68\textwidth} % Main Panel (e.g. Education, Work Experience)
            \begin{tcolorbox}[grow to right by=0.8cm,height=0.79\textheight,colframe=white,colback=white]
                % Profile Section
                %%\section*{Profile}             
                       \section*{Education}
                    \education{B Tech in Computer Science}{ 2023 -  2027}{Pranveer Institute Of Technology, Kanpur}{Marks .} \vspace{0.5em}
                    \education{10+2}{ 2021 -  2022}{Dayanand Dinanath Education Centre}{I got 83.3 percent marks } \vspace{0.5em}
                     \education{High school}{ 2019 -  2020}{Dayanand Dinanath Education Centre}{I got 86.6 percent marks . \vspace{0.5em}
                    
                    Thesis title: \textit{The relevant thesis project}}
                % Courses
                \section*{Work experience}
                    \work{Validation scientist}{Jan 2018 - present}{Thermo Fischer}{ 
                    \begin{itemize}
                        \item Responsibility 1
                        \item Responsibility 2
                        \item Responsibility 3
                        \item Responsibility 4
                        \item Gave a talk at  Berlin Digitalization \& Innovation Conference 2025 \link{https://www.youtube.com/}
                    \end{itemize} }
                    \work{Compliance administrator}{Mar 2015 - Dec 2018}{BioNTech}{ 
                    \begin{itemize}
                        \item Responsibility 1
                        \item Responsibility 2
                        \item Responsibility 3
                        \item Responsibility 4
                    \end{itemize}
                    }
         
                \section*{Certifications}
                 \education{Certificate of GMP Compliance of a manufacturer}{12 Apr 2015}{Gläsernes Labor Akademie}{Description} 
                 \education{Statistical analysis}{4-5 Mar 2014}{TU Dresden}{Description} 
            \end{tcolorbox}
        \end{minipage} 
        }
    \end{tcolorbox}

%%%%%%% PAGE 2
    
    \begin{tcolorbox}
        \vspace*{-0.5em}
            \begin{minipage}[t]{0.999\textwidth} % Main Panel (e.g. Education, Work Experience)
%% Uncomment the following line you want to change the background color
                %\begin{tcolorbox}[grow to right by=0.75cm,height=0.8\textheight,colframe=white,colback=lightgray]
                \section*{Publications}
                    \publ{Publication2}{Journal1 (2017)}{A. Lin, M. Mustermann}{www.doi.org/}
                    \publ{Publication1}{Journal2 (2016)}{A. Lin, M. Mustermann}{www.doi.org/}
                    
                \section*{Skills}
                \vspace{0.3cm}
                \subsection*{Pharmaceutical industry}
                    \skill{Skill 1}{0,1,2,3,4}{Long Description Long Description Long Description Long Description Long Description Long Description Long Description} 
                    \skill{Skill 2}{0,1,2,3,4}{Long Description Long Description Long Description Long Description Long Description Long Description Long Description}
                \subsection*{Soft skills}
                    \skill{Presentation}{0,1,2,3,4}{Long Description Long Description Long Description Long Description Long Description Long Description Long Description}
                    \skill{Team management}{0,1,2,3}{Long Description Long Description Long Description Long Description Long Description Long Description Long Description}
                    \skill{Teaching}{0,1,2}{Long Description Long Description Long Description Long Description Long Description Long Description Long Description}       
%% Uncomment the following line if uncommented above
                %\end{tcolorbox}
        \end{minipage}
        \subsection*{Software}
        \adjustbox{valign=t}{\begin{minipage}{0.46\textwidth}
            \vspace{0.1cm}
                \soft{Specialized \newline software}{0, 1, 2, 3 }
                 \soft{Power BI}{0, 1, 2}
                 \soft{R}{0, 1}
        \end{minipage}}  
        \adjustbox{valign=t}{\begin{minipage}{0.03\textwidth}
        \end{minipage}}       
        \adjustbox{valign=t}{\begin{minipage}{0.48\textwidth} 
            \vspace{0.1cm}
            \soft{Python (Jupyter)}{0, 1, 2, 3, 4}
            \soft{Microsoft Office}{0, 1}
            \soft{\LaTeX}{0, 1}
        \end{minipage}}
    \end{tcolorbox}
\end{document}